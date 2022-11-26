/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. */
#include<iostream>
using namespace std;
class Cal
{
	int a,b,c;
	public:
		Cal()
		{
			cout<<"Enter A:";
			cin>>a;
			cout<<"Enter B:";
			cin>>b;
		}
		void add()
		{
			c=a+b;
			cout<<"Addition :" <<c<<endl;
		}
		void sub()
		{
			c=a-b;
			cout<<"Substraction :" <<c<<endl;
		}
		void multi()
		{
			c=a*b;
			cout<<"Multiplication :" <<c<<endl;
		}
		void div()
		{
			c=a/b;
			cout<<"Division :" <<c<<endl;
		}		
};
int main()
{
	Cal ans;
	while(5)
	{
		int choice ;
		cout<<endl<<"!.....calculation......!"<<endl;
		cout<<endl<<"1. Addition"<<"\n";
		cout<<"2. Substraction"<<"\n";
		cout<<"3. Multiplication"<<"\n";
		cout<<"4. Division"<<"\n";
		cout<<"5. Break"<<"\n";
		
		cout<<"\n"<<"Enter your choice : ";
		cin>>choice;
		
		if(choice == 1)
		{
			ans.add();
		}
		else if(choice == 2)
		{
			ans.sub();
		}
		else if(choice == 3)
		{
			ans.multi();
		}
		else if(choice == 4)
		{
			ans.div();		}
		else if(choice == 5)
		{
			break ;
		}
		else
		{
			cout<<"Invaild choice...!"<<"\n";
		}
	}
}
