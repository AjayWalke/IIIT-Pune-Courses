#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int x;
  x=20;
  int*ptr;
  ptr=&x;
  int**ptr1;
  ptr1=&ptr;
  int***ptr3;
  ptr3=&ptr1;
  printf("%d",***ptr3);
  *ptr=200;
   printf("%d",***ptr3);
  return 0;
}
