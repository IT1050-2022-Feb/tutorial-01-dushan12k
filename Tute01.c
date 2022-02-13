/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1;
  float mark2;
  float sum,avg;

  printf("Enter Mark of Subject 1: ");
  scanf("%f", &mark1);

  printf("Enter Mark of Subject 2: ");
  scanf("%f", &mark2);

  sum = mark1 + mark2;
  avg = sum / 2.0;

  printf("Average is: %.2f", avg);
  
  return 0;
}

