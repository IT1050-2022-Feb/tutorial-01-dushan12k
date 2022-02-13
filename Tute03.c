/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n;
  int sum = 0;

  printf("Enter a Number for n: ");
  scanf("%d", &n);

  while(n > 0)
  {
      sum = sum + n;
      n = n - 1;
  }

  printf("sum of numbers 1 to n is: %d", sum);
  return 0;
}

