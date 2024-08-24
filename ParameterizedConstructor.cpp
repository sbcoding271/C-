#include<iostream>
using namespace std;

class student
{
	public:
		int id;
		string name;
		
		student(int sid,string sname)
		{
			id=sid;
			name=sname;
		}
		
		void putData()
		{
			cout<<"id="<<id<<endl;
			cout<<"name="<<name<<endl;
			
		}
};
int main()
{
	student s1(101,"sairaj");
	s1.putData();
	return 0;
}
