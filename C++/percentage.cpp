#include<iostream>
using namespace std;
#define subject 5
#define per total/subject
//#deine cout<< printf
int main()
{
	int eng,m1,pic,wpd,m2,total;
	cout<<"enter the marks of the subject"<<endl;
	cin>>eng>>m1>>pic>>wpd>>m2;
	total=eng+m1+pic+wpd+m2;
	cout<<"total marks="<<total<<endl;
	//float per=total/subject;
	cout<<"percentage="<<per;
	return 0;
	
	
}
