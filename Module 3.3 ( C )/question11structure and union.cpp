/*
WAP to show difference between Structure and Union.
 
structure : Each varible member occupied a unique memory space. Structure is a collection of variables (can be of different types) under a single name.
			struct structureName {
  			dataType member1;
  			dataType member2;
  			...
			};

union : Every variable members share the the memory space of the largest size variable.
		Structures allocate enough space to store all their members, whereas unions can only hold one member value at a time.
		union car
	{
  		char name[50];
  		int price;
	};

*/
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int age;
  float salary;
} person1;

int main() {

  strcpy(person1.name, "Akshitpatel");

  person1.age = 28;
  person1. salary = 18500;

  printf("Name: %s\n", person1.name);
  printf("Age No.: %d\n", person1.age);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
