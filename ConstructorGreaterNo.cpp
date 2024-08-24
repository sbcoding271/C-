#include<iostream>
using namespace std;
class large
{
	int a,b;
	public:
		 large()
		{
			cout<<"\n enter the values of a and b"<<endl;
			cin>>a>>b;
		}
		
		void calculate()
		{
			if(a>b)
			{
				cout<<a<< "is greater than" << b;
			}
			else if(a==b){
				cout<<"both the numbers are equal";
			}
			else
			{
				cout<<b <<"is greater than"<< a;
			}
		}
		void Even()
		{
			if(a%2==0)
			{
				cout<<"\n number is even"<<endl;
			}
			else
			
			{
				cout<<"\n number is odd"<<endl;
			}
		}
		void positive()
		{
			if(a>=0)
			{
				cout<<"number is positive"<<endl;
			}
			else
			
			{
				cout<<"number is negative"<<endl;
			}
		}
};

int main()
{
	large l;
	l.calculate();
	l.Even();
	l.positive();
	return 0  ;
}

