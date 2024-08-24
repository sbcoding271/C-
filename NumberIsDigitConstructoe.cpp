#include<iostream>
using namespace std;

class check
{
	int a;
	public:
		check()
		{
			cout<<"\n enter the value of a";
			cin>>a;
		}
		
		void process()
		{
			if(a>=-9&&a<=9)
			{
			
			cout<<"it is a digit"<<endl;
		}
			
		
			else 
			{
				cout<<"it is not a digit"<<endl;
				
			}
}
};

int main()
{
	check c;
	c.process();
	return 0;
}


