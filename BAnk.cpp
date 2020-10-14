#include<iostream>
#include<stdlib.h>
using namespace std;

class BankAccount
{
	string accountnum;
	double balance;
	
	public:
	
	BankAccount(string accnum, double bal)
	{
		accountnum = accnum;
		balance = bal;
	}

	void deposit(double amount)
	{
		balance = balance + amount;
	}
	
	void withdraw(double amount)
	{
		balance = balance - amount;
	}
	
	double getbalance()
	{
		return(balance);
	}
	
	string getaccountnum()
	{
		return(accountnum);
	}
};

int main()
{
	int choice;
		cout<<"\n=============================== BANK-OF-TECHNORBIT ===============================\n";

		cout<<"To create an account please enter any number: ";
		string accnum;
		cin>>accnum;
		cout<<"Enter your initail Bank Balance: ";
		double bal;
		cin>>bal;
		BankAccount a(accnum, bal);
		do
		{
			cout<<"1. Deposit amount\n2. Cash withdraw\n3. Check Balance\n0. Exit\n";
			cout<<"Enter your choice: ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					cout<<"Please enter amount to deposit: ";
					double bal1;
					cin>>bal1;
					a.deposit(bal1);
					break;
				case 2:
					cout<<"Please enter amount to withdraw: ";
					double bal2;
					cin>>bal2;
					a.withdraw(bal2);
					break;
				case 3:
					cout<<"Your Account number is: "<< a.getaccountnum()<<"\n";
					cout<<"Your Account number is: "<< a.getbalance()<<"\n";
					break;
			}
		}while(choice != 0);
  return 0;
}