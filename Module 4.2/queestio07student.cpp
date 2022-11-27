/*
Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. 
Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance) 
*/

#include<iostream>
using namespace std;

class student
{
	protected :
		int r_n;
		
		public :
			void roll_no(int x)
			{
				cout<<"\n";
				r_n = x;
				cout<<"ROLL NO : "<<r_n<<endl;
			}
};
class test : public student
{
	protected :
		int math, science;
		
		public :
			void obtain_mark()
			{
				cout<<"Enter Maths Marks :";
				cin>>math;
				cout<<"Enter Science Marks :";
				cin>>science;
			}
};
class results : public test
{
	protected :
		int t;
		
		public :
			void total()
			{
				t = math + science;
				
			}
			void display()
			{
			cout<<"\n";
			cout<<"roll no. :- "<<r_n<<endl;
			cout<<"obtain marks : "<<endl;
			cout<<"\t"<<"maths : "<<math<<endl;
			cout<<"\t"<<"science : "<<science<<endl;
			cout<<"total : "<<t<<endl;
		}
};
int main()
{
	results std1;
	std1.roll_no(1);
	std1.obtain_mark();
	std1.total();
	std1.display();
	
	results std2;
	std2.roll_no(2);
	std2.obtain_mark();
	std2.total();
	std2.display();
}
