//write a Program to REVERSED the number given
#include <stdio.h>

int main() {

  int n, rs = 0, sum;

  printf("Enter an Number: ");
  scanf("%d", &n);

  while (n != 0) {
    sum = n % 10;
    rs = rs * 10 + sum;
    n /= 10;
  }

  printf("Reversed number = %d", rs);

}
