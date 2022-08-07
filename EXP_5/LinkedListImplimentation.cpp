#include<iostream>
#include"Node.h"

LinkedList::LinkedList(){
	head = NULL;
}

LinkedList::InsertAt(){
	
}

void LinkedList::InsertAtBeg(int data){
	Node *temp = new Node;
	temp -> data = data;
	temp -> next = head;
	head = &temp;
}

void LinkedList::InsertAtEnd(int data){
	Node *temp,*r;
	if(this->head == NULL){
		temp = new Node;
		temp -> data = data;
		temp -> next = NULL; 
		head = &temp;
	}
	else{
		r=*head;
		while(r->next!=NULL){
			r=r->next;
		}
		temp = new Node;
		temp -> data = data;
		temp -> next = NULL;
		r->next = temp;
	}
}

int LinkedList::InsertAfter(int loc,int data){
	Node *temp,*r;
	temp = head;
	int i = 1;
	if(loc>0){
		while(i<loc){
			temp = temp->next;
			i++;
			if(temp==NULL){
				return -1;
			}
		}
		r = new Node;
		r->data = data;
		r->next = temp->next;
		temp->next = r;
	}
	else{
		return -2;
	}
	return 0;
}

int LinkedList::InsertBefore(int loc,int data){
	Node *temp,*r;
	temp = head;
	int i = 1;
	if(loc==1){
		r=new Node;
		r->data = data;
		r->next =*head;
		head = &r;
	}
	else if(loc>1){
		while(i<loc-1){
			temp = temp-> next;
			i++;
			if(temp->next == NULL){
				return -1;
			}
			
		}
		r=new Node;
		r->data = data;
		r->next = temp->next;
		temp->next = r;
	}
	else{
		return -2;
	}	
}

int LinkedList::InsertAt(int loc,int data){
	Node *temp,*r;
	temp = *head;
	int i = 1;
	if(loc==1){
		r=new Node;
		r->data = data;
		r->next =*head;
		head = &r;
	}
	else if(loc>1){
		while(i<loc-1){
			temp = temp-> next;
			i++;
			if(temp->next == NULL){
				return -1;
			}
			
		}
		r=new Node;
		r->data = data;
		r->next = temp->next;
		temp->next = r;
	}
	else{
		return -2;
	}
}

void LinkedList::DeleteFirst(){
	if (*q == NULL){
		Print(“No Element to Delete”);
	}
	else
	{
		node* temp = *q;
		*q = temp -> next;
		free(temp);
	}
}

void LinkedList::DeleteLast(){
	Node *r, *s;
	if(*head==NULL) //If the list is empty
	{
		return -1;
	}
	else {
		s=*head;
		while(s -> next !=NULL) {
		r=s;
		s=s -> next;
	}
		r -> next = NULL;
		delete s;
	}
}

int LinkedList::DeleteAt(int loc){
	Node *temp, *r;
	temp=*head;
	int i=1;
	if(loc==1) {	
		temp=*head;
		*head=temp -> next;
		delete temp;
	}
	else if(loc>1)
	{
		while(i<loc) //Traverse the list
		{

			r=temp;
			temp= temp -> next;
			i++;
			if(temp==NULL)
			{
				return -1;
			}

		}
		r -> next=temp -> next;
		delete free;
	}
	else
	{
		return -2;
	}
}



