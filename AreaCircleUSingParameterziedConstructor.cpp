//Area of Circle Using Parameterized Constructor
#include<iostream>
using namespace std;
class Area
{
	int r;
	float area,pi=3.14;
	public:
		Area(int r)
		{
			this->r=r;
		}
		
		void calculate()
		{
			area=pi*r*r;
			cout<<"Area of Circle="<<area<<endl;
		}
};

int main()
{
	int r;
	cout<<"Enter the radius"<<endl;
	cin>>r;
	Area a(r);
	a.calculate();
	return 0;
	
}
