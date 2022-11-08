//WAP to swap two numbers without using third variable
#include<stdio.h>
int main()
{
	int sum=0,size,i,temp;
	printf("Enter the size of array : ");
	scanf("%d",&size);
	int number[size];
	for(i=0;i<size;i++){
		printf("Enter The Number :\ ");
		scanf("%d",&number[i]);		
	}
	
	for(i=0;i<size;i+=2){
		
		temp = number[i]; 
		number[i] = number[i+1]; 
		number[i+1] = temp;
		
	}
	printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < size;i++)
    {
        printf("%d\n",number[i]);
    }			
}

