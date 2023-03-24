/*Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age*/

#include<stdio.h>
#define n 5


struct employee
	{
		int empno ;
		char name[10] ;
		char address[100];
		int age ;	
	}	
		x[n];

int main()
	{
		int i ;
//		printf("how many employee you wanna enter : ");
//		scanf("%d",&n);
	
		for(i=0 ; i<n ; i++)
		{
			printf("----- : Enter employee detail : -----\n"); 
		
			printf("\nEmployee Number : ");
			scanf("%d",&x[i].empno);
		
			printf("Employee Name : ");
			scanf("%s",&x[i].name);
		
			printf("Employee Address : ");
			scanf("%s",&x[i].address);
		
			printf("Employee Age : ");
			scanf("%d",&x[i].age);
		
			printf("\n");
		}
	
		for(i=0 ; i<n ; i++)
		{
			printf("\n----- : Display Employe Detail : -----\n");
			
			printf("\nEmployee Number : %d",x[i].empno);
		
			printf("\nEmployee Name : %s",x[i].name);
		
			printf("\nEmployee Address : %s",x[i].address);
		
			printf("\nEmployee Age : %d\n",x[i].age);
		}
}
