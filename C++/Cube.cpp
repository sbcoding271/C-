#include<iostream>
using namespace std;
class Circle{
	public :
		int r , c;
		int cube(int c){return c*c*c;}
		float areaOfCircle(int r){return 3.14*r*r;}
};

int main(){
	Circle c;
	cout<<"cube ="<<c.cube(3)<<endl;
	cout<<"cube ="<<c.areaOfCircle(2)<<endl;
}
