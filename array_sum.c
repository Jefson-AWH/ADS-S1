#include <stdio.h>
  2 int sumArray(int arr[],int n)
  3 {
  4     int sum=0;
  5     for(int i=0;i<n;i++)
  6     {
  7         sum += arr[i];
  8     }
  9     return sum;
 10 }
 11 void main()
 12 {
 13     int n;
 14     printf("enter the number of elements: ");
 15     scanf("%d", &n);
 16     int arr[n];
 17     printf("enter %d elements:\n",n);
 18     for(int i=0;i<n;i++)
 19 {
 20     scanf("%d", &arr[i]);
 21 }
 22 int result=sumArray(arr,n);
 23 printf("sum of the elements=%d\n",result);
 24 }