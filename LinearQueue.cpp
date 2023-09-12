#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
class myqueue
{
public:
    int q[5],x;
    int front=-1;
    int rear=-1;
    int n=5;

    void enqueue(int x)
    {
        if(rear==n-1)
        {
            cout<<"\n overflow ";

        }
        else
        {
            rear++;
            q[rear]=x;
            cout<<" the inserted element is = "<<q[rear];
        }
    }

    void dequeue()
    {
        if(rear==-1)
        {
            cout<<"\n queue underflow";

        }
        else
        {
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                int x=q[front];
                front++;

            }
        }

    }

    void display()
    {
        cout<<"\n element in queue are =";
        for(int i=front+1;i<=rear;i++)
        {
            cout<<q[i]<<"\t";
        }
    }

};


int main()
{
    int ch,x;
    myqueue a;

    do{
        cout<<"\n 1.enqueue  \n 2. dequeue \n 3.display";
        cout<<"\n enter your choice=";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\n enter the element to be inserted=";
            cin>>x;
            a.enqueue(x);
            a.display();
            break;
        case 2:
            cout<<"\n before delete the element are ";
            a.display();
            cout<<"\n after delete the element are ";
            a.dequeue();
            a.display();
            break;
        case 3:
            a.display();
            break;
        default:
            cout<<"invalid attempt";


        }


    }
     while(ch<4);
     return 0;

}
