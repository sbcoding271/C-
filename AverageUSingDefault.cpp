//Caluclating Average using Default Constructor
#include<iostream>
using namespace std;
class Average
{
	int s1,s2,s3;
	float total,avg;
	public:
		Average()
		{
			cout<<"Enter thr marks of s1\ns2\ns3"<<endl;
			cin>>s1>>s2>>s3;
		}
		
		void getData()
	
		{
			total=s1+s2+s3;
			avg=(total/350)*100;
			cout<<"Avergae="<<avg;
		}
		
};
int main()
{
	Average a1;
	a1.getData();
}
