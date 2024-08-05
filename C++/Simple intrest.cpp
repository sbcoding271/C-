#include<iostream>
using namespace std;
int main()
{
	int amount,rate;
    float SI ,year;
	cout<<"enter the value of year"<<endl;
	cout<<"enter the value of amount"<<endl;
	cout<<"enter the value of rate"<<endl;
	cin>>year>>amount>>rate;
	SI=(amount*rate*year)/100;
	cout <<"Total Intrest"<<SI <<endl;
	cout<<"Amount to be paid "<<(SI+amount)<<" After "<<year << "Year";
	return 0;
	
}
