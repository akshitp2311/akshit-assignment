//Area of Circle, Triangle, Rectangle.
#include<stdio.h>
#include<iostream>
int main()
{
	int r,l,b,c,w,h;
	float a, pi=3.14,t;
	printf("Enter the radios: ");
	scanf("%d",&r);
	a = pi * r * r;
	printf("The area of circle is %f\n",a);
	printf("\n Enter the Lenght..");
	scanf("%d",&l);
	printf("Enter the Breadth...");
	scanf("%d",&b);
	c = l * b;
	printf("The area of rectangle is %d..\n",c);
	printf("\nEnter the Value of Weight..");
	scanf("%d",&w);
	printf("Enter the Value of Height..");
	scanf("%d",&h);
	t = 0.5 * w * h;
	printf("The area of triangle is %f..",t);
	
}

