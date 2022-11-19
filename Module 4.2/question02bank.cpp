/* Define a class to represent a bank account. Include the following members: 
1. Data Member: 
-Name of the depositor 
-Account Number 
-Type of Account 
-Balance amount in the account 
2. Member Functions 
-To assign values 
-To deposited an amount 
-To withdraw an amount after checking balance 
-To display name and balance */

#include<iostream>
using namespace std;

class bank
{
	char name[50];
	int a;
	char type[20];
	int balance;
	
	public :
		void assign()
		{
			cout<<"ENTER NAME :";
			cin>>name;
			
			cout<<"ENTER Account No :";
			cin>>a;
			
			cout<<"Enter Account Type :";
			cin>>type;
			
			cout<<"ENTER Balance :";
			cin>>balance;
		}
		void display()
		{
			cout<<"\n"<<"!...Detail...!"<<"\n";
			cout<<"name : "<<name<<"\n";
			cout<<"account number : "<<a<<"\n";
			cout<<"type : "<<type<<"\n";
			cout<<"balance : "<<balance<<"\n";
		}
		void deposite(int x)
		{
			balance = balance + x ;
		}
		void check_b()
		{
			cout<<"Balance : "<<balance<<"\n" ;
		}
};

int  main()
{
	bank detail;
	
	detail.assign();
	
	int dep;
	cout<<"\n"<<"Enter Deposite Ammount :";
	cin>>dep;
	detail.deposite(dep);
	detail.check_b();
	detail.display();
}
