//Circle using Constructor
#include<iostream>
using namespace std;
class circle{
	private:
	int r;
	float pi=3.14,area;
	public:
	circle(){
	
	cout<<"\n enter the radius"<<endl;
	cin>>r;
	cout<<getData();
	}	
	int getData(){return pi*r*r;}
};
int main()
{
circle c1;
return 0;
}


