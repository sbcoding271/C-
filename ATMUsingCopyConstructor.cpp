//ATM using Copy Constructor
#include<iostream>
using namespace std;
class ATM
{
	int bal,amount;
	public:
	
	ATM()
	
	{
		cout<<"Enter your balance"<<endl;
		cin>>bal;
	}
	
	ATM(ATM &obj)
	{
		bal=obj.bal;
		amount=obj.amount;
	}
	
	void deposit()
	{
		cout<<"Enter the amount to be deposited"<<endl;
		cin>>amount;
		bal=bal+amount;
		cout<<"Balance after Deposition"<<bal<<endl;
	}

	void withdraw()
	{
		cout<<"Enter the amount to be Withdrawled"<<endl;
		cin>>amount;
		if(amount>bal)
		{
			cout<<"Insufficent Balance"<<endl;
			
		}
		else
		{
		
		bal=bal-amount;
		cout<<"Balance after withdrawled"<<bal<<endl;
		}
	}	
};

int main()
{
	ATM a1;
	ATM cpy=a1;
	cpy.deposit();
	cpy.withdraw();
	return 0;
	
	 
}
