//SUM OF EVEN NUMBER
#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Addition of Even Sum 1 to %d = %d", n, sum);
}
