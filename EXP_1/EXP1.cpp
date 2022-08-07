#include<iostream>

using namespace std;

struct Product
 {
     int Product_id;
     string Product_name;
     float Product_price;
     float gst;
 };

bool insert_at(struct Product *obj,int id,string Name,float price1,float GST,int *len,int size1)
 {
     if(*len >= size1)
     {
         return false;
     }
     else
     {
         (*len)++;
         obj[*len].Product_id = id;
         obj[*len].Product_name = Name;
         obj[*len].Product_price = price1;
         obj[*len].gst = GST;
         return true;
     }
 }

bool delete_at(struct Product *obj,int id,int *len,int size1)
 {
     int pos = 0;
     int count1 = 0;
     if(*len == -1 || *len >= size1)
     {
         return false;
     }
     else
     {
         int i;
         for(i = 0; i <= *len; i++)
         {
             if(obj[i].Product_id == id)
             {
                 if(i != *len)
                 {
                     pos = i;
                     cout<<i<<*len;
                     count1++;
                 }
                 else
                 {
                     (*len)--;
                     return true;
                 }

             }
         }
         if(count1 != 0)
         {
             for(i = pos; i <= *len; i++)
                {
                    obj[i].Product_id = obj[i+1].Product_id;
                    obj[i].Product_name = obj[i+1].Product_name;
                    obj[i].Product_price = obj[i+1].Product_price;
                    obj[i].gst = obj[i+1].gst;
                    (*len)--;
                    return true;
                }
         }
     }
     return false;
 }

bool Search(struct Product *obj,string Name,int *len)
 {
     if(*len == -1)
     {
         return false;
     }
     else
     {
         int i;
         for(i = 0; i <= *len; i++)
         {
             if(obj[i].Product_name == Name)
             {
                 return true;
             }
         }
     }
     return false;
 }
bool display(struct Product *obj,struct Product *obj1,int *len)
{
    if(*len == -1)
    {
        return false;
    }
    else
    {
        int i = 0;
        for(i = 0; i <= *len; i++)
        {
            obj1[i].Product_id = obj[i].Product_id;
            obj1[i].Product_name = obj[i].Product_name;
            obj1[i].Product_price = obj[i].Product_price;
            obj1[i].gst = obj[i].gst;
        }
        for(i = 0; i <= *len; i++)
        {
            cout<<"\n\nProduct Id : "<<obj1[i].Product_id<<"\nProduct Name : "<<obj1[i].Product_name<<"\nProduct Price : "<<obj1[i].Product_price<<"\nGST : "<<obj1[i].gst;
        }
        return true;
    }
}

int main()
 {
     int size1,id,len = -1;
     float price,Gst;
     bool temp;
     string name;
     cout<<"\nEnter the size of list : ";
     cin>>size1;
     struct Product obj[size1];
     struct Product obj1[size1];
     int choice;
     do
     {
         cout<<"\n\nMenu.";
         cout<<"\n1.Add the item";
         cout<<"\n2.Delete the item.";
         cout<<"\n3.Search the item.";
         cout<<"\n4.Display the item.";
         cout<<"\n5.Exit.";

         cout<<"\nEnter the choice : ";
         cin>>choice;

         switch(choice)
          {
              case 1:
                        cout<<"\nEnter the ID : ";
                        cin>>id;
                        cout<<"\nEnter the product name : ";
                        cin>>name;
                        cout<<"\nEnter the price of product : ";
                        cin>>price;
                        cout<<"\nEnter the GST : ";
                        cin>>Gst;
                        temp = insert_at(obj,id,name,price,Gst,&len,size1-1);
                        if(temp == false)
                        {
                            cout<<"\nList is full.";
                        }
                        else
                        {
                            cout<<"\nData inserted successfully.";
                        }
                        break;
              case 2:
                        cout<<"\nEnter the id : ";
                        cin>>id;
                        temp = delete_at(obj,id,&len,size1);
                        if(temp == false)
                        {
                            cout<<"\nSomething went wrong.";
                        }
                        else
                        {
                            cout<<"\nData is deleted";
                        }
                        break;
              case 3:
                        cout<<"\nEnter the name : ";
                        cin>>name;
                        temp = Search(obj,name,&len);
                        if(temp == false)
                        {
                            cout<<"\nSomething went wrong";
                        }
                        else
                        {
                            cout<<"\nData is present";
                        }
                        break;
              case 4:
                        temp = display(obj,obj1,&len);
                        if(temp == false)
                        {
                            cout<<"\nList is empty.";
                        }
                        break;
              case 5:
                        return 0;
              default:
                        cout<<"\nYou choose wrong option, please try again.\n";
          }
     }while(choice != 5);
 }
