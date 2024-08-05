#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,c;//a=10==> 00001010 & b=20=> 00010100
	c=b&a;
	cout<<"bitwise &"<<c<<endl;
	c=b|a;
	cout<<"bitwise |"<<c<<endl;
	c=b^a;
	cout<<"bitwise ^"<<c<<endl;
	c=a<<2;//left shift operator
	cout<<"left shift"<<c<<endl;
	c=a>>2;//right shift operator
	cout<<"left shift"<<c<<endl;

	return 0;
		
}
