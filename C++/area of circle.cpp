#include<iostream>
using namespace std;
#define PI 3.14// to define a constant using macro
#define AREA(x) (PI*x*x)
int main()
{
	int radius;
//	float areaofcircle;
	cout<<"enter the raduis "<<endl;
	cin>>radius;
//	areaofcircle=PI*radius*radius;
//	cout<<"area of circle"<<areaofcircle<<endl;
	cout<<AREA(radius);
	return 0;
}
