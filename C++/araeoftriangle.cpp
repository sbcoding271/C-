#include<iostream>
using namespace std;
#define h 0.5
#define AREA(b,l) (h*b*l)
int main()
{
	int len,hig;
	cout<<"enter the value of len,hig"<<endl;
	cin>>len>>hig;
	cout<<AREA(len,hig);
}
