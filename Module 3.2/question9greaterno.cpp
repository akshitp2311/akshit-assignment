//greater no 
#include<stdio.h>
int main()
{
	int a[2],i,max=0,min=0;
    printf("Enter The Value :");
    for(i=0;i<=2;i++)
        {
            scanf("%d",&a[i]);
        }
      	for(i=0;i<=2;i++)
        {
            if(a[i]>max)
        {
            max=a[i]; 
        }
        	else
               {
                min=a[i];   
               }
           }
            printf("Minium is : %d\n",min);
            printf("Maximum is : %d\n",max);
} 
