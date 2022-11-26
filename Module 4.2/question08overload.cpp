 /*
 Write a program to concatenate the two strings using Operator Overloading 
 */
 
 #include<iostream>
 #include<string.h>
 using namespace std;
 
 class A
 {
 	char a[10] ;
 	
 	public :
 		void take()
 		{
 			gets(a);	
		}
		void display()
		{
			puts(a); 
		}
		void operator+(A obj)
		{
			strcat(a,obj.a);
			cout<<a;
		}
};
 
 int main()
 {
 	A obj1;
 	A obj2;
 	
 	cout<<"enter str1 : ";
 	obj1.take();
 	
 	cout<<"enter str2 : ";
 	obj2.take();
 	
 	cout<<"string-1 : ";
 	obj1.display();
 	
 	cout<<"string-2 : ";
 	obj2.display();
 	
 	obj1 + obj2 ;
 }
