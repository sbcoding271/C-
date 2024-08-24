// Calculating Average Using Parameterziedn Constructor
#include<iostream>
using namespace std;
class average
{
	int s1,s2,s3;
	float total,avg;
	public:
	
	average(int s1,int s2,int s3)
	{
		this->s1=s1;
		this->s2=s2;
		this->s3=s3;
	}
	
	
	void calculate()
	{
		total=s1+s2+s3;
		avg=(total/450)*100;
		cout<<"Average"<<avg;
		
	}
	
};

int main()
{
	int s1,s2,s3;
	cout<<"Enter yout marks of your subjects \ns1,\ns2,\ns3 ";
	cin>>s1>>s2>>s3;
	average a(s1,s2,s3);
	a.calculate();
	return 0;
}
