#include "Node.h"

class LinkedList{
	Node *head;
	public: 
		LinkedList();
		void InsertAt();
		void InsertAtBeg();
		void InsertAtEnd();
		void InsertAfter();
		void InsertBefore();
		void DeleteAt();
		void DeleteFirst();
		void DeleteAfter();
		void DeleteBefore();
		void DeleteLast();
		void Display();
		void isEmpty();
		void Search();
}
