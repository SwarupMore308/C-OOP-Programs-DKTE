#include<iostream>
#include "Node.h"
#include"LinkedList.h"


using namespace std;

LinkedList :: LinkedList()
 {
  this->head = NULL;
 }

void LinkedList :: Insert_at_beg(int item)
 {
  Node *temp;
  temp = new Node;
  temp->data = item;
  temp->next = head;
  head = temp;
 }

void LinkedList :: Insert_at_end(int item)
 {
  Node *temp = head;
  Node *endnode;
  endnode = new Node;
  while(temp->next != NULL)
   {
     temp = temp->next;
   }
  temp->next = endnode;
  endnode->data = item;
  endnode->next = NULL;
 }

void LinkedList :: display()
 {
  Node *temp;
  temp = head;

  if(temp == NULL)
   {
    cout<<"List is empty"<<endl;
   }
  else
   {
    cout<<"Nodes : "<<endl;
    cout<<"HEAD ->   ";
    while(temp != NULL)
     {
      cout<<temp->data<<"   ->   "<<"";
      temp = temp->next;
     }
     cout<<"NULL"<<endl;
   }
 }

int LinkedList :: Delete_at_beg()
 {
  Node *temp;
  temp = head;
  if(temp == NULL)
   {
    return -1;
   }
  else
   {
    head = temp->next;
    delete temp;
    return 0;
   }
   return 1;
 }

int LinkedList :: Delete_at_end()
 {
  Node *temp1;
  temp1 = head;
  if(temp1 == NULL)
   {
    return -1;
   }
  else
   {
	Node *temp2;
        temp2 = new Node;
  	temp2=temp1->next;

    	while(temp2->next != NULL)
     	 {
                 temp1 = temp1->next;
      		 temp2 = temp2->next;
      	}
	temp1->next = NULL;
     delete temp2;
     return 0;
   }
   return 1;
 }


/*
Node LinkedList :: Serach()
 {
	
 }*/
