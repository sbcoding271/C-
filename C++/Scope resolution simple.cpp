#include<iostream>
using namespace std;
int a=10;
int main()
{
int a=20;
cout<<"value of a "<<a<<endl;
cout<<"value of a of global variable"<<::a <<endl;
{
	
	int a=30;
cout<<"value of a "<<a<<endl;
cout<<"value of a of global variable"<<::a<<endl;
}
return 0;
}
