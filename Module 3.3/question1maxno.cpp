/*Write a program to find out max number from the given array using function*/

#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number(1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Max Number is = %.2lf", arr[0]);
  return 0;
}

