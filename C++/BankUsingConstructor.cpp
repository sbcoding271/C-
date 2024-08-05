#include<iostream>
using namespace std;
class ATM
{
	int balance=0;
	public:
			ATM(){
				 DisplayBalance();
			}

	void deposit(double amount)
	{
		
		balance=balance+amount;
		 DisplayBalance();
	}
		 withdraw(double amount)
	{
		if(amount>0&&amount<=balance)
		{
		
		balance=balance-amount;
		DisplayBalance();
		}
		else
		{
		 cout<<"\n insufficent balance"<<endl;
		}
	}
		 DisplayBalance()
		{
			cout<<"\n Balance="<<balance<<endl;
		 } 
};


	int main()
	{
		ATM a;
		a.deposit(1000);
		a.withdraw(20000);
		
		return 0;
		
	}
	
