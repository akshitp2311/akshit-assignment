//Write a Program of Addition,Substraction,Multipication, Division using swirtch case(main menu option)
/*Enter the First Number :
10

Enter the Second Number : 20

-----Main Menu----
1.Addition
2.Subtraction
3.Multiply
4.Divide
5.Exit
Enter your choice : 1

Addition numbers: 30.000000
Enter the First Number :*/

#include<stdio.h>
int main()
{
   float num1,num2,ans;
   int opt;
   do
   {
   printf("\nEnter the First Number : ");
   scanf("%f",&num1);
   printf("\nEnter the Second Number : ");
   scanf("%f",&num2);
   
   printf("\n-----Main Menu----");
   printf("\n1.Addition\n2.Subtraction\n3.Multiply\n4.Divide\n5.Exit");
   printf("\nEnter your choice : ");
   scanf("%d",&opt);
   switch(opt)
   {
     case 1:
              ans = num1+num2;
              printf("\nAddition numbers: %f",ans);
              break;
     case 2:
             ans = num1-num2;
             printf("\nSubtraction numbers: %f",ans);
             break;
     case 3:
             ans = num1*num2;
             printf("\nMultiply numbers: %f",ans);
             break;
     case 4:
              ans = num1/num2;
              printf("\nDivison numbers: %f",ans);
              break;
    case 5:
             break;
    default: 
              printf("\nYou Entered Wrong Choice\n");
              break;
   }
    }while(opt!=5);
  return 0;
}
