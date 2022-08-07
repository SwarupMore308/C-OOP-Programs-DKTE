#include<iostream>
#include"Node.h"
#include"LinkedList.h"

using namespace std;

int main()
 {
  LinkedList l;
  Node address;
  int choice,Insertnumber,searchnumber,dr;
  do
   {
    cout<<"--------------------------------------------"<<endl;
    cout<<"Menu:"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"1. Insert at beginning : "<<endl;
    cout<<"2. Insert at end"<<endl;
    cout<<"3. Delete At beginning"<<endl;
    cout<<"4. Delete at end."<<endl;
    cout<<"5. Display List"<<endl;
    cout<<"6. Search"<<endl;
    cout<<"7. Exit."<<endl;
    cout<<"Enter the choice : ";
    cin>>choice;
    cout<<"\n";
    switch(choice)
     {
      case 1:
		cout<<"Enter the number that you want to insert : ";
		cin>>Insertnumber;
                cout<<"\n";
                l.Insert_at_beg(Insertnumber);
                break;
      case 2:
                cout<<"Inter the number that you want to insert : ";
		cin>>Insertnumber;
                cout<<"\n";
                l.Insert_at_end(Insertnumber);
                break;
      case 3:
                dr = l.Delete_at_beg();
                if(dr == -1){
                	cout<<"List Is Empty!";
                }
        	else if(dr == 0){
        		cout<<"Node Successfully Deleted";
        	}
                break;
      case 4:
                dr = l.Delete_at_end();
                if(dr == -1){
                	cout<<"List Is Empty!";
                }
        	else if(dr == 0){
        		cout<<"Node Successfully Deleted";
        	}
                break;
      case 5:
                l.display();
                break;
      case 6:
                /*cout<<"Enter the number to be search : "<<endl;
                cin>>searchnumber;
                address = l.Search(searchnumber);
                break;*/
      case 7:
		        return 0;
      default :
		cout<<"Your option is wrong."<<endl;
                break;
     }
   }while(choice != 6);
 }
