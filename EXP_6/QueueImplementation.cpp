#include<iostream>
#include"Queue.h"

using namespace std;

Queue::Queue()
{
      rear=-1;
      front=-1;
}

int Queue::isEmpty()
{
      if(rear==-1&&front==-1)
        return 1;
      return 0;
}

int Queue::isFull()
{
      if(rear==9)
        return 1;
      return 0;
}

int Queue::Enqueue(int n)
{
      if(isFull())
        return 0;
      ++rear;
      arr[rear]=n;
      if(front==-1)
        front=0;
      return n;
}

int Queue::Dequeue()
{
      if(isEmpty())
        return 0;
      int temp;
      temp=arr[front];
      front++;
      return temp;
}

void Queue::Display()
{
        if(isEmpty())
         cout<<"Queue is Empty.."<<endl;
        else
        {
           
           for(int i=front; i<=rear; i++)
              cout<<arr[i]<<" | ";
           cout<<""<<endl;
        }
}
