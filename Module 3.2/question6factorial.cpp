#include <stdio.h>
int main()
{
    int sum, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &sum);

    if (sum < 0)

        printf("Factorial of a negative number invaild");

    else 
	{
        for (i = 1; i <= sum; ++i) 
		{
            fact *= i;
        }
        printf("Factorial of %d = %llu", sum, fact);
    }

}
