#include<iostream>
using namespace std;
template <class T>

class Stack
{
    private:
        T *arr;
        int top;
        int size;
    public:
        Stack()
        {
            top = -1;
        }
        Stack(int size)
        {
            arr = new T[size];
            this->size = size;
        }
        int push(T d)
        {
            if(top+1 < size)
            {
                top++;
                arr[top] = d;
                return 1;
            }
            else
                return 0;
        }
        int pop(T *d)
        {
            if(top != -1)
            {
                *d = arr[top];
                top--;
                return 1;
            }
            else
            {
                return 0;
            }
        }
};

int main()
{
    Stack<int> s[5];
    int d;
    int choice, status;
    while(1)
    {
        cout<<"1.PUSH"<<endl
            <<"2.POP"<<endl
            <<"3.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1)
        {
            cout<<"Enter data to be pushed : "<<endl;
            cin>>d;
            status = s->push(d);
            if(status)
            {
                cout<<"data pushed"<<endl;

            }
            else    
                cout<<"Stack full!!"<<endl;

        }
        if(choice == 2)
        {
            status = s->pop(&d);
            if(status)
            {
                cout<<"data poped : "<<d<<endl;
            }
            else
                cout<<"Stack Empty"<<endl;
        }
        if(choice == 3)
        {
            exit(0);
        }
    }


}