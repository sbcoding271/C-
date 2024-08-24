#include<iostream>
using namespace std;
class atm
{
	int amount;
	float bal;
	public:
	atm()
	{
		cout<<"Enter balance "<<endl;
		cin>>bal;
	}
	
	void deposit()
	{
		cout<<"Eenter the amount to be deposited";
		cin>>amount;
		bal=bal+amount;
		cout<<"Balance after deposition of amount="<<bal<<endl;
	}
	void withdraw();
};
	void atm::withdraw()
	{
		cout<<"Eenter the amount to be Withdraw";
		cin>>amount;
		if(amount>bal)
		{
			cout<<"Insufficent balance"<<endl;
		}
		else
		{
			bal=bal-amount;
			cout<<"balance after withdraw"<<bal<<endl;
		}
	}
int main()
{
	atm a1;
	a1.deposit();
	a1.withdraw();
	return 0;
}
