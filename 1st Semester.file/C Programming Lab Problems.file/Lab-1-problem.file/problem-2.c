/*
Write Program To Display The value of x Using a,b,c value where x=a/b-c
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  float a,b,c,x;  
  printf("Enter the values of a, b, c :\n");
  scanf("%f %f %f", &a, &b, &c);
  x = a/(b-c);
  printf("x = %f", x);
  return 0;
}
