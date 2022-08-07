#include<iostream>
#include"Stack.h"

using namespace std;


Stack::Stack()
{
      top=-1;
}

int Stack::isEmpty()
{
      if(top==-1)
        return 1;
      return 0;
}

int Stack::isFull()
{
      if(top==9)
        return 1;
      return 0;
}

int Stack::push(int n)
{
      if(isFull())
        return 0;
      ++top;
      arr[top]=n;
      return n;
}

int Stack::pop()
{
      if(isEmpty())
        return 0;
      int temp;
      temp=arr[top];
      top--;
      return temp;
}

int Stack::peek()
{
        if(isEmpty())
          return 0;
        return arr[top];
}
