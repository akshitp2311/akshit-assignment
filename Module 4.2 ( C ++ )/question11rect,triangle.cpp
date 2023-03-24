/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/
#include<iostream>
using namespace std;
class A
{
	public :
		void area(int lenght, int breadth)
		{
			cout<<"Area of Rectangle :"<<lenght*breadth<<endl;
		}
		void area(double height, double base)
		{
			cout<<"Area Of Triangle :"<<0.5*base*height<<endl; 
		}
		void area(int r)
		{
			cout<<"Area Of Circle :"<<3.14*r*r<<endl;
		}
};
int main()
{
	A a;
	a.area(10,20);
	a.area(1.5,2.5);
	a.area(2);
}
