#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of a"<<endl;
	cin>>a;//a=0101
	cout<<"enter the value of b"<<endl;
	cin>>b;//b=0100
	cout<<"value of a before swap"<<a<<endl;
	cout<<"value of b before swap"<<b<<endl;
	{
	a=b^a;//a=0101, b=0100;
	b=a^b;//b=0100,a=0001;
	a=a^b;//a=0001;
	cout<<"value of a after swap"<<a<<endl;	
	cout<<"value of b after swap"<<b<<endl;
}
	return 0;
}
