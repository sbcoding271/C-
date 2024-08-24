//Age using Parameterized Constructor
#include<iostream>
using namespace std;
class vote
{	
	int age;
	public:	
	
	vote(int age)
	{
		this->age=age;
	}
	
	void calculate()
	{
		if(age>=18&age<=120)
		{
			cout<<"Your are Eligible for Voting"<<endl;
		}
		else 
		{
			cout<<"Youe are not eligible"<<endl;
		}	
	}
};

int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	vote v(age);
	v.calculate();
	return 0;
}
