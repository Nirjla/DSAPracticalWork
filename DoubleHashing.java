import java.util.Scanner;

class DoubleHashingHashTable {
    private int currentSize, maxSize;
    private String[] keys;
    private String[] vals;

    public DoubleHashingHashTable(int capacity) {
        currentSize = 0;
        maxSize = capacity;
        keys = new String[maxSize];
        vals = new String[maxSize];
    }

    public void makeEmpty() {
        currentSize = 0;
        keys = new String[maxSize];
        vals = new String[maxSize];
    }

    public int getSize() {
        return currentSize;
    }

    public boolean isFull() {
        return currentSize == maxSize;
    }

    public boolean isEmpty() {
        return currentSize == 0;
    }

    public boolean contains(String key) {
        return get(key) != null;
    }

    private int hash1(String key) {
        return key.hashCode() % maxSize;
    }

    private int hash2(String key) {
        // Implement a second hash function here
        // For simplicity, we'll use a basic one
        return 7 - (key.hashCode() % 7); // Adjust the second hash as needed
    }

    public void insert(String key, String val) {
        if (isFull()) {
            System.out.println("Hash table is full. Cannot insert.");
            return;
        }

        int h1 = hash1(key);
        int h2 = hash2(key);
        int i = h1;
        int j = 1; // Counter for probing attempts

        while (keys[i] != null) {
            // Use double hashing for probing
            i = (h1 + j * h2) % maxSize;
            j++;

            if (i == h1) {
                System.out.println("Hash table is full. Cannot insert.");
                return;
            }
        }

        keys[i] = key;
        vals[i] = val;
        currentSize++;
    }

    public String get(String key) {
        int h1 = hash1(key);
        int h2 = hash2(key);
        int i = h1;
        int j = 1; // Counter for probing attempts

        while (keys[i] != null) {
            if (keys[i].equals(key))
                return vals[i];

            // Use double hashing for probing
            i = (h1 + j * h2) % maxSize;
            j++;
        }

        return null;
    }

    // Other methods like remove, printHashTable, etc.

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Double Hashing Hash Table Test\n\n");
        System.out.println("Enter size");

        int capacity = scan.nextInt();
        DoubleHashingHashTable dht = new DoubleHashingHashTable(capacity);
        char ch;

        do {
            System.out.println("\nHash Table Operations\n");
            System.out.println("1. Insert ");
            System.out.println("2. Get");
            System.out.println("3. Clear");
            System.out.println("4. Size");

            int choice = scan.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter key and value");
                    dht.insert(scan.next(), scan.next());
                    break;

                case 2:
                    System.out.println("Enter key");
                    String result = dht.get(scan.next());
                    if (result != null) {
                        System.out.println("Value = " + result);
                    } else {
                        System.out.println("Key not found.");
                    }
                    break;

                case 3:
                    dht.makeEmpty();
                    System.out.println("Hash Table Cleared\n");
                    break;

                case 4:
                    System.out.println("Size = " + dht.getSize());
                    break;

                default:
                    System.out.println("Wrong Entry \n ");
                    break;
            }

            // dht.printHashTable(); // You can add this method to print the hash table

            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);
        } while (ch == 'Y' || ch == 'y');
    }
}
