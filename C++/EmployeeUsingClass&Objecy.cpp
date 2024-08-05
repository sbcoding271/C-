#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	string name;
	int no;
	public:
		void setdata()
		{
			cout<<"Enter the employee no & name "<<endl;
			cin>>no>>name;
			
		}
		void getData()
		{
			cout<<"Employee id="<<no<<endl;
			cout<<"Employee name ="<<name<<endl;
		}
};
int main()
{
	Employee e;
	e.setdata();
	e.getData();
	
}

