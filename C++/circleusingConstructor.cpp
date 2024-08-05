//Circle using Function
#include<iostream>
using namespace std;
class circle{
	int r;
	float area,pi=3.14;
	public:
			void setData()
			{
				cout<<"Enter the radius of circle"<<endl;
				cin>>r;
			}
			void calculate()
			{
				area=pi*r*r;
				cout<<"area of circle="<<area<<endl;
			}
};
int main()
{
	circle c1;
	c1.setData();
	c1.calculate();
	return 100;
}

