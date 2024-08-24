//Caluclate Voting age
#include<iostream>
using namespace std;
class agee
{
	int age;
	public:
	agee()
	{
		cout<<"Enter your age"<<endl;
		cin>>age;
	}
	
	void calculate()
	{
		if(age>=18 && age <=120)
		{
			cout<<"Your are eligibe for voting"<<endl;
		}
		else if(age>120)
		{
			cout<<"Your are experied"<<endl;
		}
		else 
		{
			cout<<"Your are not eligible for voting"<<endl;
		}
		
	}
};
int main()
{
	agee a;
	a.calculate();
	return 0;
}
