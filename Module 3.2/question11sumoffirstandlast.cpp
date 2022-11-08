//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>
int main()
{
    int n, sum=0, fd, ld;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    ld = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    fd = n;
    sum = fd + ld;
    printf("Sum of first and last digit = %d", sum);
}
