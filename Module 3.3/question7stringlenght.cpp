//Write a program Find out length of string without using inbuilt function
/*length of string:
 -------------------------------------
Enter the Name : akshitpatel
The NAME Length 11  number of characters.
So, length string akshitpatel : 11


--------------------------------*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    int i, l = 0;

       printf("\n\nlength of string:\n ");
       printf("----------------------\n");
 
    printf("Enter the Name : ");
    scanf("%s", str1);
 
    for (i = 0; str1[i] != '\0'; i++)
    {
        l++;
    }
    printf("The NAME Length %d  number of characters. \n",l);
    printf("So, length string %s : %d\n\n", str1, l);
}
