#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
	int id;
	string name;
	float marks;
	
void displayStduentInformation()
{
	cout<<"student id="<<id<<endl;
	cout<<"student name="<<name<<endl;
	cout<<"student marks="<<marks<<endl;
}
};
int main()

{ 
student s;
		cout<<"enter the id of student "<<endl;
	cin>>s.id;
	cout<<"Enter name of student "<<endl;
	cin>>s.name;
	cout<<"Enter marks of student "<<endl;	
	cin>>s.marks;
	s.displayStduentInformation();
	
}

