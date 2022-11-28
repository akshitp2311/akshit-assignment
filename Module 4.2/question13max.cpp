/*
Write a program to find the max number from given two numbers using 
friend function
*/
#include<iostream>
using namespace std;
class A
{
	int a, b;
	public :
		A()
		{
			cout<<"A :";
			cin>>a;
			
			cout<<"B :";
			cin>>b;
		}
		friend void max(A obj);
};
void max(A obj)
{
	int max;
	max = obj.a>obj.b?obj.a:obj.b;
	cout<<"Max Number :"<<max;
}
int main()
{
	A obj2;
	max(obj2);
}
