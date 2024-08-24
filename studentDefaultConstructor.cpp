#include<iostream>
using namespace std;

class student
{
	public:
		int id;
		string name;
		
		student()
		{
			cout<<"\n enter your id"<<endl;
			cin>>id;
			cout<<"\n enter your name"<<endl;
			cin>>name;
		}
		
		void putData()
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			
		}
};
int main()
{
	student s1;
	s1.putData();
	return 0;
}
