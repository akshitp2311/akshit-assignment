//HOW MANY EVEN NUMBER ARE THERE...
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter Number ....:-");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		if(i%2 == 0)
		{
			printf("%d\n",i);
		}
	}
}
