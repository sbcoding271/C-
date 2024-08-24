#include<iostream>
using namespace std;
class vowel
{
	char ch;
	public:
	vowel()
	{
		cout<<"\n enter the value of a";
		cin>>ch;
		
	}
	
	void check()
	{
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
			cout<<"Character is vowel";
			
		}
		else
		{
			cout<<"Character is consonant";
			
		}
	}
};

int main()
{
	vowel v;
	v.check();
	return 0;
	
}
