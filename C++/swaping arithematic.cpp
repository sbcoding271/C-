#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of a"<<endl;
	cin>>a;//a=10
	cout<<"enter the value of b"<<endl;
	cin>>b;//b=20
	cout<<"value of a before swap"<<a<<endl;
	cout<<"value of b before swap"<<b<<endl;
	{
	a=b+a;//a=10, b=20;
	b=a-b;//b=20,a=10;
	a=a-b;//a=10;
	cout<<"value of a after swap"<<a<<endl;	
	cout<<"value of b after swap"<<b<<endl;
}
	return 0;
}
