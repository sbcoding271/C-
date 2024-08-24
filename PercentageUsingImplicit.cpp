#include<iostream>
using namespace std;
class complex
{
	public:
		int real=0,imaginary=0;
		float complex;
		void read()
		{
			cout<<"\n enter the value of real numner";
			cin>>real;
			cout<"\n enter the value of imaginary numbers";
			cin>>imaginary;
			
		}
		
		void compute()
		{
			complex=real+imaginary;
		}
		
		void write()
		{
			cout<<"Adiition of real and imaginary number ="<<complex;
			
		}
		
};

	int main()
	{
		complex c;
		c.read();
		c.compute();
		c.write();
		return 0;
	}
