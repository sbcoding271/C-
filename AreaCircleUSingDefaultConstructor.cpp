//Area of Circle Default Constructor 
#include<iostream>
using namespace std;
class Area
{
	int r;
	float PI=3.14,area;
	public:
	Area()
	{
		cout<<"Enter the raidus of circle"<<endl;
		cin>>r;
		
	}
	
	void calculate()
	{
		area=PI*r*r;
		cout<<"Area of Circle="<<area<<endl;
		
	}
};

int main()
{
	Area a1;
	a1.calculate();
	return 0;
}
