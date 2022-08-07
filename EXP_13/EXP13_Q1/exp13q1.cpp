#include<iostream>
#include<fstream>

using namespace std;

int main(){
	string text = "MY name swarup, I am student of DKTE Textile and Engineering College.";
	
	ofstream outfile;
	outfile.open("sample.txt");
	
	outfile<<text;
	
	outfile.close();
	return 0;
}
