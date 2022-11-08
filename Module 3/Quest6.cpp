//convert year into days and days into years
#include<stdio.h>

int main()
{
	int days,years;
	printf("Enter the Days..");
	scanf("%d",&days);
	years=(days/365);
	printf("%d\n",years);

	printf("Enter the Years..");
	scanf("%d",&years);
	days=(years*365);
	printf("%d\n",days);
	
}

