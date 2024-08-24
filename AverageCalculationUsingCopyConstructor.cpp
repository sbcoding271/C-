//Average Calculation Using Copy Constructor
#include<iostream>
using namespace std;
class Average
{
	int s1,s2,s3;
	float total,avg;
	public:
		
		Average()
		{
			cout<<"Enter the marks of your s1\ns2\ns3";
			cin>>s1>>s2>>s3;
			
		}
		Average(Average &obj)
		{
			s1=obj.s1;
			s2=obj.s2;
			s3=obj.s3;
			total=obj.total;
			avg=obj.avg;
		}
		void calculate()
		{
			total=s1+s2+s3;
			avg=(total/350)*100;
			cout<<"Average of studnets="<<avg;
		}
};
	
int main()
{
	Average a1;
	Average cpy=a1;
	cpy.calculate();
	return 0;
}
