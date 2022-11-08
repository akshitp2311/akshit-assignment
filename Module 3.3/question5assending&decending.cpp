/*WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

Enter the Size: 10
Enter the Number:..
 1
2
3
4
5
6
9
8
7
0


Ascending :  0  1  2  3  4  5  6  7  8  9

Descending :  9  8  7  6  5  4  3  2  1  0 */


#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,i,j;
	printf("Enter the Size: ");
    scanf("%d",&n);
    printf("Enter the Number:..\n ");
        
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\n\nAscending : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] < a[i])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\n\nDescending : ");
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	return 0;
getch();
}
