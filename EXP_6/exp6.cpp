#include<iostream>
#include"Stack.h"
#include"Queue.h"

using namespace std;

int main()
{
      int ch1,ch2,ele,res;
      Stack S;
      Queue Q;
      while(1)
      {
        cout<<" 1.STACK 2.QUEUE :"<<endl;
        cin>>ch1;
        if(ch1==1)
        {
          while(1)
          { 
           cout<<"1.PUSH 2.POP 3.PEEK 4.EXIT"<<endl<<": "<<endl;
           cin>>ch2;
             switch(ch2)
             {
                case 1:
                    cout<<"Enter Element to PUSH"<<endl;
                    cin>>ele;
                    res=S.push(ele);
                    if(res==0)
                    cout<<"Stack is Full"<<endl;
                    else
                    cout<<"Pushed Element is "<<res<<endl; 
                    break;
            
               case 2:
                res=S.pop();
                if(res==0)
                  cout<<"Can not POP Eelement"<<endl;
                else
                  cout<<"Popped Element is "<<res<<endl;
                break;
                
             case 3:
                res=S.peek();  
                if(res==0)  
                  cout<<"Stack is Empty"<<endl;
                else 
                  cout<<"Element at Top is "<<res<<endl;
                break;
                
             case 4:
                break;  
                
             default:
                cout<<"Wrong Choice.."<<endl;
            }  
            if(ch2==4)
              break;
      }
      }
      else if(ch1==2)
      {
         while(1)
         {
           cout<<"1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.EXIT"<<endl;
           cin>>ch2;
             switch(ch2)
             {
                case 1:
                    cout<<"Enter Element to ENQUEUE"<<endl;
                    cin>>ele;
                    res=Q.Enqueue(ele);
                    if(res==0)
                    cout<<"Queue is Full"<<endl;
                    else
                    cout<<"Enqueued Element is "<<res<<endl; 
                    break;
            
               case 2:
                res=Q.Dequeue();
                if(res==0)
                  cout<<"Can not Dequeue Eelement"<<endl;
                else
                  cout<<"Deqeued Element is "<<res<<endl;
                break;
                
             case 3:
                Q.Display();  
                break;
                
             case 4:
                break;
                
             default:
                cout<<"Wrong Choice.."<<endl;
            }
            if(ch2==4)
              break;
      }
    }
      else
         cout<<"Wrong Choice";
     }
      
      return 0;
}

