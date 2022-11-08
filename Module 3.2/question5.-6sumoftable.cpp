//write a programe to print a table
#include <stdio.h>
int main()
{

  int i, sum;

  printf("Enter an Number: ");
  scanf("%d", &sum);

  for (i = 1; i <= 10; ++i)
   {
    	printf("%d * %d = %d \n", sum, i, sum * i);
   }
   
}
