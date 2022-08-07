//NO ABSTRACTION
#include<iostream>
#include<iomanip>
#include<string.h>


using namespace std;
//PRODUCT CLASS
class Product{
	private: 
		int prod_id,stock;
		float gst,discount;
		double prod_price;
		string prod_name;
	public:
		Product();
		Product(int,int,float,float,double,string);
		int getId();
		int getStock();
		float getGst();
		float getDiscount();
		double getPrice();
		string getName();
		void setId(int);
		void setStock(int);
		void setGst(float);
		void setDiscount(float);
		void setPrice(double);
		void setName(string);
		void viewProduct();
		int checkStock();
};

//PURCHASED PRODUCT CLASS
class Purchased_Product:public Product{
	private:
 		int Quantity;
		double QPrice=0;
	public:
		int getQuantity();
		double getQPrice();
		void setQuantity(int);
		void setQPrice(double);
		void calculateGst(float);
		void calculateDiscount(float);
		void calculatePrice(double);		
};

//NODE CLASS
class Node{
	public:
		Purchased_Product *p;
		Node *next;		
		Node(Purchased_Product *);
};

//LINKED LIST CLASS
class LinkedList{
	public:
		Node *head;
	public:
		LinkedList();
		//LinkedList(Node *n);
		Node* getHead();
		int AddNode(Purchased_Product *);
		void DeleteNode();
		void Traverse();
};

//CART CLASS
class Cart:protected LinkedList{
	float gsttotal=0.0,discounttotal=0.0;
	double pricetotal=0.0;
	Node *n;
	public:
		void AddProduct(Purchased_Product *);
		void RemoveProduct();
		void viewCart();
		void GenerateBill();
		void DisplayBill();
};

//PRODUCT CLASS IMPLEMENTATION

Product::Product(){
	prod_id = 0;
	stock = 0;
	gst = 0.0;
	discount = 0.0;
	prod_price = 0.0;
	prod_name = "";
}

Product::Product(int prod_id,int stock,float gst,float discount,double prod_price,string prod_name){
	this->prod_id = prod_id;
	this->stock = stock;
	this->gst = gst;
	this->discount = discount;
	this->prod_price = prod_price;
	this->prod_name = prod_name;
}

int Product::getId(){
	return prod_id;
}

int Product::getStock(){
	return stock;
}

float Product::getGst(){
	return gst;
}

float Product::getDiscount(){
	return discount;
}

double Product::getPrice(){
	return prod_price;
}

string Product::getName(){
	return prod_name;
}

void Product::setId(int id){
	this->prod_id = id;
}

void Product::setStock(int stock){
	this->stock = stock;
}
void Product::setGst(float gst){
	this->gst = gst;
}
void Product::setDiscount(float discount){
	this->discount = discount;
}
void Product::setPrice(double price){
	this->prod_price = price;
}
void Product::setName(string name){
	this->prod_name = name;
}

void Product::viewProduct(){
cout<<setw(10)<<left<<prod_id<<setw(10)<<left<<prod_name<<setw(10)<<right<<prod_price<<setw(10)<<right<<gst<<setw(10)<<right<<stock<<setw(10)<<right<<discount;

}

int Product::checkStock(){
	return getStock();
}

//PURCHASED PRODUCT CLASS IMPLEMENTATION

int Purchased_Product::getQuantity(){
	return Quantity;
}
double Purchased_Product::getQPrice(){
	return QPrice;
}

void Purchased_Product::setQuantity(int quantity){
	this->Quantity = quantity;
}

void Purchased_Product::setQPrice(double QPrice){
	this->QPrice = QPrice;
}

void Purchased_Product::calculateGst(float pgst){
	float calgst=0.0;	
	calgst = getPrice()*(pgst/100);
	setGst(calgst);
}

void Purchased_Product::calculateDiscount(float pdiscount){
	float caldiscount=0.0;
	caldiscount = getPrice()*(pdiscount/100);
	setDiscount(caldiscount);	
}

void Purchased_Product::calculatePrice(double pprice){
	double calprice = 0.0;
	double Qprice = 0.0;
	calprice = (pprice+getGst())-getDiscount();
	Qprice = calprice*Quantity;
	setPrice(calprice);
	setQPrice(Qprice);
}

//NODE CLASS IMPLEMENTATION

Node::Node(Purchased_Product *p){
	this->p = p;
	next = NULL;
}

//LINKED LIST CLASS IMPLEMENTATION

LinkedList::LinkedList(){
	head = NULL;
}

Node* LinkedList::getHead(){
	return head;
}


int LinkedList::AddNode(Purchased_Product *p){
	Node *ne = new Node(p);
   	if (ne == NULL)
    	{
    	    return -1;
    	}
    	ne->next = NULL;
    	if (head == NULL)
    	{
    	    head = ne;
    	    return 0;
    	}
    	else
    	{
    	    Node *pt;
    	    pt=head;
    	    while (pt->next != NULL)
    	    {
    	        pt = pt->next;
    	    }
    	    pt->next = ne;
    	    return 0;
    	}
}
void LinkedList::DeleteNode(){
	Node *tem;
    	Node *pre, *con;
    	con = head;
    	if (head->next==NULL)
    	{
    	    head=NULL;
    	}
    	else
    	{
    	    while (con->next != NULL)
    	    {
    	        pre = con;
    	        con = con->next;
    	    }
    	    pre->next = NULL;
    	    tem = con;
    	    delete con;
    	}
}

void LinkedList::Traverse()
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
cout<<"---------------------------"<<left<<""<<setw(15)<<left<<"PRODUCT DETAIL"<<"---------------------------"<<endl;
cout<<setw(10)<<left<<"ID"<<setw(10)<<left<<"NAME"<<setw(10)<<left<<"PRICE"<<setw(10)<<left<<"GST"<<setw(10)<<left<<"STOCK"<<setw(10)<<left<<"DISCOUNT"<<endl;
cout<<setw(69)<<endl;
        Node *ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            ptr->p->viewProduct();
            cout<<setw(10)<<left<<ptr->p->getQPrice()<<endl;
            ptr=ptr->next;
        }
    }
}

//CART CLASS IMPLEMENTATION

void Cart::AddProduct(Purchased_Product *p){
	AddNode(p);
}
void Cart::RemoveProduct(){
	DeleteNode();
}

void Cart::viewCart(){
	Traverse();
}

void Cart::GenerateBill(){
    cout<<"In Generate Bill";
	if(head==NULL)
    	{
        	cout<<"List is empty"<<endl;
    	}
    	else
    	{   cout<<"In ELSE PART OF GENERATE BILL";
       		Node *ptr;
        	ptr=head;
        	
        	while(ptr!=NULL)
        	{
        	   cout<<ptr->p->getId();
        	    gsttotal = gsttotal + ((ptr->p->getQuantity() * ptr->p->getPrice()) * (ptr->p->getGst()/100));
        	    discounttotal = discounttotal+((ptr->p->getQuantity() * ptr->p->getPrice()) * (ptr->p->getDiscount()/100));
        	    pricetotal = pricetotal+((ptr->p->getQuantity() * ptr->p->getPrice()));
		    ptr = ptr->next;
        	}
    	}	
}

void Cart::DisplayBill(){
	n = getHead();
	if(n==NULL)
    	{
       		cout<<"List is empty"<<endl;
    	}
    	else
    	{
    	    cout<<"-------------------------------------"<<left<<""<<setw(15)<<left<<"PRODUCT DETAIL"<<"-------------------------------------"<<endl;
cout<<setw(10)<<left<<"ID"<<setw(10)<<left<<"NAME"<<setw(10)<<left<<"PRICE"<<setw(10)<<left<<"GST"<<setw(10)<<left<<"STOCK"<<setw(10)<<left<<"DISCOUNT"<<setw(10)<<left<<"QUANTITY"<<setw(10)<<left<<"FINAL PRICE"<<endl;
cout<<setw(69)<<endl;
cout<<"------------------------------------------------------------------------------------------"<<endl;
    	    Node *ptr;
    	    ptr=n;
    	    while(ptr!=NULL)
    	    {	ptr->p->viewProduct();
    	    	cout<<setw(10)<<right<<ptr->p->getQuantity()<<setw(10)<<right<<(ptr->p->getPrice() * ptr->p->getQuantity())<<endl;
    	        ptr=ptr->next;
    	    }
    	    cout<<"------------------------------------------------------------------------------------------"<<endl;
    	    cout<<"                                                            "<<setw(15)<<right<<"TOTAL = "<<setw(6)<<right<<pricetotal<<endl;
    	    cout<<"                                                            "<<setw(15)<<right<<"GST = "<<setw(6)<<right<<gsttotal<<endl;
    	    cout<<"                                                            "<<setw(15)<<right<<"DISCOUNT = "<<setw(6)<<right<<discounttotal<<endl;
    	    cout<<"                                                            "<<setw(15)<<right<<"FINAL BILL = "<<setw(6)<<right<<((pricetotal+gsttotal)-discounttotal)<<endl;
    	    cout<<setw(60)<<left<<setfill('-')<<"\n"<<endl;
	cout<<"                    "<<"\u2660 VISIT AGAIN \u2660"<<endl;
	cout<<setw(60)<<left<<setfill('-')<<"\n"<<endl;
    	}
}

//MAIN FUNCTION IMPLEMENTATION

int main(){
	Purchased_Product *p;
	Cart obj;
	int pno=0;
	int choice=0;
	while(1){
		cout<<"Choose one of the following: ";
		cout<<"\n1.ADD PRODUCT";
		cout<<"\n2.REMOVE PRODUCT";
		cout<<"\n3.VIEW PRODUCT LIST\n";
		cout<<"4.GENERATE BILL\n";
		cout<<"5.EXIT"<<endl;
		cin>>choice;
		if(choice == 1){
					cout<<"How Many Products you want To add?";
					cin>>pno;
					for(int  i=0;i<pno;i++){
					p = new Purchased_Product;
					string name;
					int id,stock;
					float gst,discount;
					double price;
					int quantity;
					
					cout<<"ID: ";
					cin>>id;
					p->setId(id);
					cout<<"\nNAME: ";
					cin>>name;
					p->setName(name);
					cout<<"STOCK: ";
					cin>>stock;
					p->setStock(stock);
					cout<<"PRICE: ";
					cin>>price;
					p->setPrice(price);
					p->calculatePrice(price);
					cout<<"GST: ";
					cin>>gst;
					p->setGst(gst);
					cout<<"DISCOUNT: ";
					cin>>discount;
					p->setDiscount(discount);
					cout<<"Enter Quantity: ";
					cin>>quantity;
					p->setQuantity(quantity);
					obj.AddProduct(p);
					}
		}else if(choice == 2){
				obj.RemoveProduct();
		}else if(choice == 3){
			obj.viewCart();
		}
		else if(choice == 4){
			obj.GenerateBill();
			cout<<"Do you want to see bill? (1.YES/2.NO): ";
			int ch;
			cin>>ch;
			if(ch==1){
				obj.DisplayBill();
			}
			else if(ch==2){
				break;
			}
			else{
				cout<<"Wrong Choice!!!";
			}
		}
		else{
			
				cout<<"WRONG CHOICE!!!";
		}
	}
	return 0;
}









