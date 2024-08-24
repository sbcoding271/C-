#include<iostream>
using namespace std;

class student
{
	int sr_no,s1,s2,s3;
	string name;
	float total,per;
	
	public:
		student()
		{
			cout<<"\n enter your sr_no \n name "<<endl;
			cin>>sr_no>>name;
			cout<<"\n enter your marks of s1 \ns2 \ns3"<<endl;
			cin>>s1>>s2>>s3;
				
		}
		
		void highest()
		{
			if(s1>s2&&s1>s3)
			{
				cout<<"\n s1 is maximum"<<s1<<endl;
			
		    }
			if(s2>s3&&s2>s1)
			{
				cout<<"\n s2 is maximum"<<s2<<endl;
			
		    }
			if(s3>s2&&s3>s1)
			{
				cout<<"\n s3 is maximum"<<s3<<endl;
			
		    }
		}
		
		void calculate()
		{
			total=s1+s2+s3;
			cout<<"total marks of subject:"<<total<<endl;
			per=total/3;
			cout<<"per"<<per<<endl;
		}
		
		void grade()
		{
		if(per>=75&&per<100)
		{
			cout<<"\npass with distiction"<<per;
		}	
		else if(per>=60&&per<75)
		{
			cout<<"\npass with first class"<<per;
		}
		else if(per>=40&&per<60)
		{
			cout<<"\npass with second class"<<per;
		}
		else 
		{
			cout<<"\n I am soryy....you are failed"<<per;
		}
	}	
	
};
int main()
{
	student s1;
	s1.highest();
	s1.calculate();
	s1.grade();
	return 0;
}
