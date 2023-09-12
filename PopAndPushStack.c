#include <stdio.h>
#include <stdbool.h>
#define n 5
int stack[n];
int top=-1;

bool isFull()
{
    return top==n-1;
}
bool isEmpty()
{
    return top==-1;

}


void push(int data)
{
    if(!isFull())
    {
        top++;
        stack[top]=data;
    }
    else
    {
      printf("stack is full\n");
    }
}

int pop()
{
    if(!isEmpty())
    {
        int data=stack[top];
        top--;
        return data;
    }
    else{
        printf("stack is empty\n");
        return -1;
    }

}


void display()
{
    printf("stack elements are here....\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d",stack[i]);

    }
    printf("\n");

}



int main()
{

    push(1);
    push(2);
    push(3);
    display();
    int data=pop();
    display();
    return 0;

}
