////HOW MANY ODD NUMBER ARE THERE...
#include <stdio.h>

int main()
{
    int i, n;
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("disply odd number..\n", n);

    for(i=1; i<=n; i++)
    {
    		if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
}
