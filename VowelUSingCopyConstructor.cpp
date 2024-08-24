//Voting using Copy Constructor
#include<iostream>
using namespace std;
class Vote
{
	int age;
	public:
		Vote()
		{
			cout<<"Enter your age";
			cin>>age;
		}
		
		Vote (Vote&obj)
		{
			age=obj.age;
		}
		
		void calculate()
		{
			if(age>=18)
			{
				cout<<"Your are eligible for Voting"<<endl;
			}
			else
			{
				cout<<"Your are not eligible for Voting"<<endl;
			}
		}
};

int main()
{
	Vote v1;
	Vote cpy=v1;
	cpy.calculate();
	return 0;
}

