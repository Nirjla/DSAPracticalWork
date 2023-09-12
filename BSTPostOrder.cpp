// Postorder Traversal:
// C++ code to implement the approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Class to define structure of a node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int v)
    {
        this->data = v;
        this->left = this->right = NULL;
    }
};
 
// PostOrder Traversal
void printPostOrder(Node* node)
{
    if (node == NULL)
        return;
 
    // Traverse left subtree
    printPostOrder(node->left);
 
    // Traverse right subtree
    printPostOrder(node->right);
 
    // Visit node
    cout << node->data << " ";
}
 
// Driver code
int main()
{
    Node* root = new Node(100);
    root->left = new Node(20);
    root->right = new Node(200);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(150);
    root->right->right = new Node(300);
 
    // Function call
    cout << "PostOrder Traversal: ";
    printPostOrder(root);
    cout << "\n";
 
    return 0;
}
