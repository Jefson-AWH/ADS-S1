#include <stdio.h>
  2 int  largest(int a[],int n)
  3 {
  4     int max = a[0];
  5     for(int i=1; i<n; i++)
  6     {
  7         if(a[i] > max)
  8         {
  9             max = a[i];
 10         }
 11     }
 12         return max;
 13     }
 14     void main()
 15     {
 16         int a[5]={20,10,5,80,40};
 17         printf("largest element is:%d",largest(a,5));
 18     }