/*
Write a program of to sort the array using templates
*/
#include<iostream>
using namespace std;

template <typename T>
class A
{
	private :
		T temp,i,j;
		T *a;
		
		int n;
		public :
			void getdata(int no)
			{
				n=no;
				a = new T[n];
				
				cout<<endl<<"Enter Data :"<<endl;
				for(int i=0; i<n; i++)
				{
					cin>>a[i];
				}
			}
			void sort()
			{
				for(int i=0;i<n;i++)
				{
					for(int j=i+1;j<n;j++)
					{
						if(a[i]>a[j])
						{
							temp = a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				for(int i=0;i<n;i++)
				{
					cout<<a[i]<<endl;
				}
			}
};
int main()
{
	int num;
	cout<<"Enter the no of Data :";
	cin>>num;
	
	A<int>obj1;
	A<char>obj2;
	A<double>obj3;
	
	cout<<"Enter Integer :"<<endl;
	obj1.getdata(num);
	
	cout<<"Sorted Integer :"<<endl;
	obj1.sort();
	
	cout<<"Enter character data :"<<endl;
 	obj2.getdata(num);
 	
 	cout<<"Sorted character :"<<endl;
 	obj2.sort();
 	
 	cout<<"Enter double data :"<<endl;
 	obj3.getdata(num);
 	
 	cout<<"sorted double value :"<<endl;
 	obj3.sort();
}
