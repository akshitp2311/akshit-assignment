//SUM OF ODD NUMBER
#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Addition of ODD Sum 1 to %d = %d", n, sum);
}
