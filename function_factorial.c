#include <stdio.h>
  2 int factorial(int n)
  3 {
  4     int fact = 1;
  5     for(int i=1; i<=n; i++)
  6     {
  7         fact= fact * i;
  8     }
  9     return fact;
 10 }
 11 void main()
 12 {
 13     int n, result;
 14     printf("enter a number: ");
 15     scanf("%d", &n);
 16     result= factorial(n);
 17     printf("factorial = %d", result);
 18 }
