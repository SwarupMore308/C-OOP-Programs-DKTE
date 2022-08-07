#include<iostream.h>

using namespace std;

struct product{
	int id;
	string name;
	double price;
	float gst;
};

void initialize(int& p,int size){
	for(int i=0;i<size;i++){
		p[i].id=0;
		p[i].name="";
		p[i].pr=0.0;
		p[i].gst=0.0;
	}
}

int insert_at(int& p,int i,int ID,string nm,double pr,float gt){
	int idd;
	string nam;
	double prce;
	float gs;
	if(i<size){
		if(!p[i].id==0 && p[size-1].id==0){
			for(int j=size;j>=i;j--){
				p[j].id=p[j-1].id;
				p[j].name=p[j-1].name;
				p[j].price=p[j-1].price;
				p[j].gst=p[j-1].gst;
			}		
		}
		p[i].id=ID;
		p[i].name=nm;
		p[i].price=pr;
		p[i].gst=gt;
		return i++;
		}
	return -1;	
}



int main(){
	int id,name,price,gst;
	int choice;
	int pindex=0;
	cout<<"Enter size of List: ";
	cin>>size
	product p[size];
	initialize(p,size);
	cout<<"**********MENU**********"<<endl;
	cout<<"1. Add Product."<<endl<<"2.Delete Product."<<endl<<"3. Search Product."<<endl<<"4. Display Product List."<<endl<<":> ";
	cin>>choice;
	switch(choice){
		case 1:
			int n,ind,j=0;
			cout<<"How Many Products you want to add? : ";
			cin>>n;
			cout<<"At what number you want to add product ? : ";
			cin>>ind;
			if(ind>=size && n>0){
				cout<<"List is Full !!!";
				break;
			}
			else{
				for(i=ind-1;i<n;i++){
					cout<<"Product ID : ";
					cin>>id;
					cout<<"Product Name : ";
					cin>>name;
					cout<<"Product Price : ";
					cin>>price;
					cout<<"Product GST : ";
					cin>>gst;
					pindex = insert_at(p,i,id,name,price,gst,size);
					if(pindex != -1){
						cout<<"Product Inserted Successfully"<<endl;
					}
					else{
						cout<<"Failed To Insert Product."<<endl;
					}
				}
			}
			break;
		case 2: 
			delete_at();
			break;
		case 3:
			searchele();
			break();
		case 4:
			display();
			break;
		default:
			cout<<"WRONG CHOICE!!! TRY AGAIN"<<endl;
	}
}
