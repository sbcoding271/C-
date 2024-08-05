#include<iostream>
using namespace std;
class student 
{
	public:
		int id;

		void displayStudenti()
		{
			cout<<"id ="<<id<<endl;
		}
};
int main(){
	
	student s;
	cout<<"enter your id"<<endl;
	cin>>s.id;
	s.displayStudenti();
	return 100;
}
