#include<string>

using namespace std;

class product{
	private: 
		int id,quantity;
		double price,total,discount;
		float gst;
		string name;
	public:
 		product();
		product(int,string,int,double,double,float);
		void setid(int);
		void setname(string);
		void setquantity(int);
		void setprice(double);
		void setdiscount(double);
		void setgst(float);

		int getid();
		string getname();
		int getquantity();
		double getprice();
		double getdiscount();		
		float getgst();

		//void initialize();
		//void display();
		//void billgeneration(product *);
};
