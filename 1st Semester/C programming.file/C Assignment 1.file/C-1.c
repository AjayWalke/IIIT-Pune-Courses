/*
Write Program that will used temperature in Fahrenheit and Display it in Celsius.
*/

#include <stdio.h>
#include <string.h>

int main(){
 float fah;
  
  printf("Enter the temperature in F\n");
  scanf("%f",&fah);
  
  float cel;
  cel = (fah-32)*0.5555556;
  printf("Temperature in celsius : %f\n", cel);
  return 0;
}
