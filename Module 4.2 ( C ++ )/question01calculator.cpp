/*WAP to create simple calculator using class*/

#include<iostream>
using namespace std;

class cal
{
	int c;
	public :
		int add(int x, int y)
		{
			c = x + y;
			return c;
		}
		int sub(int x, int y)
		{
			c = x - y;
			return c;
		}
		int multi(int x, int y)
		{
			c = x * y;
			return c;
		}
		int div(int x, int y)
		{
			c = x / y;
			return c;
		}
};

int main()
{
	int a, b;
	
	cout<<"Enter A : ";
	cin>>a;
	
	cout<<"Enter B : ";
	cin>>b;
	
	while(a)
	{
		int ch , result;
		cout<<"\n"<<"1. Addition";
		cout<<"\n"<<"2. Substraction";
		cout<<"\n"<<"3. Multiplication";
		cout<<"\n"<<"4. Division";
		cout<<"\n"<<"5. Break";
		cout<<"\n"<<"Enter your Choice : ";
		cin>>ch;
		cout<<"\n";
	
		cal obj;
	
		if(ch==1)
		{
			cout<<"Result:"<<obj.add(a,b)<<"\n";
		}
		else if(ch==2)
		{
			cout<<"Result:"<<obj.sub(a,b)<<"\n";
		}
		else if(ch==3)
		{
			cout<<"Result:"<<obj.multi(a,b)<<"\n";
		}
		else if(ch==4)
		{
			cout<<"Result:"<<obj.div(a,b)<<"\n";
		}
		else if(ch==5)
		{
			break ;
		}
		else
		{
			cout<<"Invalid number.....!"<<"\n";
		}
	}
}
