/*
Write Program that will used temperature in Fahrenheit and Display it in Celsius.
*/

#include<stdio.h>
int main()
{ 
  float Fahrenheit, Celsius;
  scanf("%f",&Fahrenheit);
  Celsius = ((Fahrenheit-32)*5)/9;
  printf("\n Temperature in Celsius is : %f",Celsius); 
  return 0;
}
