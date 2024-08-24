//ATM using Paramterized Constructor
#include<iostream>
using namespace std;
class ATM
{
	int bal,amount;
	public:
	ATM(int bal)
	{
		this->bal = bal;
	}
	void deposit()
	{
		cout<<"Enter the amount to be deposited";
		cin>>amount;
		bal=bal+amount;
		cout<<"Balance after deposition:-"<<bal<<endl;
	}
	//void withdraw();

	void withdraw()
	{ 
		cout<<"Enter the amount to be deposited";
		cin>>amount;
		if(amount>bal)
		{
			cout<<"Insufficent amount"<<endl;
		}
		else
		{
		
		bal=bal-amount;
		cout<<"Balance after withdraw:-"<<bal<<endl;	
		}
	}
};
int main(){
	int bal;
	cout<<"enter your balance";
	cin>>bal;
	ATM a(bal);
	a.deposit();
	a.withdraw();
	return 0;
}
