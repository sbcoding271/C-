//Area of Circle Using Copy Constructor
#include<iostream>
using namespace std;
class Area
{
	int r;
	float area,PI=3.14;
	public:
		Area()
		{
			cout<<"Enter Radius of the cirlce"<<endl;
			cin>>r;
		}
		
		Area(Area&obj)
		{
			r=obj.r;
			area=obj.area;
		}
		void calcualte()
		{
			area=PI*r*r;
			cout<<"Area of Circle="<<area<<endl;
		}
};

int main()
{
	Area a1;
	Area cpy=a1;
	cpy.calcualte();
	return 0;
}
