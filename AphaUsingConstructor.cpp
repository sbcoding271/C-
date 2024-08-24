#include<iostream>
using namespace std;
class alpha
{
	char a;
	public:
	alpha()
	{
		cout<<"\n enter the value of a";
		cin>>a;
		
	}
	
	void check()
	{
		if((a>='a'&& a<='z') || (a<='Z'&&a>='A'))
		{
			cout<<"Character is Alphabet";
			
		}
		else
		{
			cout<<"Character is  not alphabet";
			
		}
	}
};

int main()
{
	alpha a;
	a.check();
	return 0;
	
}
