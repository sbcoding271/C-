#include<iostream>
#include<string.h>
using namespace std;
class student 
{
	int id;
	string name;
	float per;
	public:
		 student()
		{
			cout<<"Enter the student id"<<endl;
			cin>>id;
			cout<<"Enter the student name"<<endl;
			cin>>name;
			cout<<"Enter the percedntage"<<endl;
			cin>>per;
		}
		int getId(){
			return id;
		}
		string getName(){
			return name;
		}
		float getper(){
			return per;
		}
		void getData(){
			cout<<"id"<<id<<endl;
			cout<<"name"<<name<<endl;
			cout<<"per"<<per<<endl;
		}
		
};
int main()
{
	student s;
	cout<<s.getId();
	cout<<s.getper();
	cout<<s.getName();
	//s.getData();
	
}
