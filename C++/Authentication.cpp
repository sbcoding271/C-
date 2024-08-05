#include<iostream>
#include<string.h>
using namespace std;
class Authentication{
	string name,pass;
	public:
		void setdata()
		{
			cout<<"Enter the Username "<<endl;
			cin>>name;
			cout<<"Enter the Password "<<endl;
			cin>>pass;
			
		}
		void getData()
		{
			cout<<"User name="<<name<<endl;
			cout<<"Password ="<<pass<<endl;
		}
};
int main()
{
 Authentication a;
	a.setdata();
	a.getData();
	
}

