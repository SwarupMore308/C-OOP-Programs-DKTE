class complex
{
	int real,img;
	public:
		complex();
		void getreal();
		void getimg();
		void setreal(int);
		void setimg(int);
		void display();
		complex operator +(complex c2);
		complex operator -(complex c2);
};
