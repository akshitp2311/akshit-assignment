//Simple calculater
#include<stdio.h>
int main()
{
	char Operator;
	float num1, num2, result = 0;
	printf("Enter the Operator...Like (+, -, *, /, %)..");
	scanf("%c", &Operator);
	printf("Enter the Digits....Twis..\n");
	scanf("%f%f",&num1, &num2);
	
	switch(Operator)
	{
		case'+':
			result = num1 + num2;
		break;
		
		case'-':
			result = num1 - num2;
		break;
		
		case'*':
			result = num1 * num2;
		break;
		
		case'/':
			result = num1 / num2;
		break;
		
		case'%':
			result = num1 % num2;
		break;
	default:
			printf("\nInvalid Operator");
	}
	printf("The Value = %f", result);
	
}

