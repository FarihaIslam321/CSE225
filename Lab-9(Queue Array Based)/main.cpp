#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;

int main()
{
QueType<int>q(5);
    if(q.IsEmpty())
    {
         cout<<"Queue is Empty"<<endl;
    }
    else
    {
         cout<<"Queue is not Empty"<<endl;
    }

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);


     if(q.IsEmpty())
    {
         cout<<"Queue is Empty"<<endl;
    }
    else
    {
         cout<<"Queue is not Empty"<<endl;
    }

    if(q.IsFull())
    {
         cout<<"Queue is Full"<<endl;
    }
    else
    {
         cout<<"Queue is not Full"<<endl;
    }

    q.Enqueue(6);

    for(int i=0;i<5;i++)
    {
         int m;
         q.Dequeue(m);
         cout<<m<<" ";
         q.Enqueue(m);
    }
    cout<<endl;

    if(q.IsFull())
    {
         cout<<"Queue is full"<<endl;
    }
    else
    {
         cout<<"Queue is not full"<<endl;
    }

    try
    {
         q.Enqueue(8);
    }
    catch(FullQueue)
    {
         cout<<"Queue overflow "<<endl;
    }

    int item;

    q.Dequeue(item);
    q.Dequeue(item);

    cout << "After dequeuing two items: ";

    for (int i = 0; i < 3; i++)
    {
        q.Dequeue(item);
        cout << item << " ";
        q.Enqueue(item);
    }
    cout << endl;

    q.Dequeue(item);
    q.Dequeue(item);
    q.Dequeue(item);

    if (q.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is not Empty" << endl;
    }

    try
    {
        q.Dequeue(item);
    }
    catch (EmptyQueue&)
    {
        cout << "Queue Underflow" << endl;
    }

    int n;
    cout << "Enter an integer n to generate binary values up to: ";
    cin >> n;

    QueType<string> binaryQueue(100);
    binaryQueue.Enqueue("1");

    cout << "Binary values from 1 to " << n << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        string front;
        binaryQueue.Dequeue(front);
        cout << front << endl;

        binaryQueue.Enqueue(front + "0");
        binaryQueue.Enqueue(front + "1");
    }

    return 0;
}
