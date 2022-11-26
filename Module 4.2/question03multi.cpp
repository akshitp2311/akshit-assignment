/*
Write a program to find the multiplication values and the cubic values using 
inline function
*/
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()
		{
			cout<<"a=";
			cin>>a;
			
			cout<<"b=";
			cin>>b;
		}
	inline void multi()
	{
		cout<<"multi="<<a*b<<endl;
	}
	inline void cub()
	{
		cout<<"a-cube="<<a*a*a<<endl;
		cout<<"b-cube="<<b*b*b<<endl;
	}
};
int main()
{
	A obj;
	obj.multi();
	obj.cub();
}
