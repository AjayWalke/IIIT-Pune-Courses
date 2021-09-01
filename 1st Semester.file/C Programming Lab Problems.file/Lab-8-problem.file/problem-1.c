/*
A Maruti car dealer maintains Records of various vehicles in following form
Vehicle Type Month Sales Price Per units
Maruti-800 18 21000
Maruti -dx 19 22000
Maruti Desire 20 24000
Write program to read data into table of strings and output vehicle sold .User must input
data Using scanf function. Display all the records using pointer To Array. Display Total Sales
amounts.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
  char vehicle_name[3][20];
  int month_sale[3];
  int price[3];
  int total[3],totalsale=0;
  int d = 1; 
  for (int i = 0; i < 3; i++)
  {
     printf("\nEnter the details of %d vehicle::\n",d);
     scanf(" %s %d %d",&vehicle_name[i],&month_sale[i],&price[i]);
     total[i] = month_sale[i]*price[i];
     totalsale += total[i];
     d++;
  }
  char (*ptr1)[20] = vehicle_name;
  int (*ptr2) = month_sale;
  int (*ptr3) = price;
  
   printf("\n-------------------------------------------------------------\n");
   printf("      VEHICLE NAME     MONTH SALES        PRICE PER UNITS\n");
   printf("-------------------------------------------------------------\n");
   for (int i = 0; i < 3; i++)
   {
   printf("%18s%13d%16d\n",(ptr1+i),*(ptr2+i),*(ptr3+i)); 
   }
   printf("-------------------------------------------------------------\n");
   printf("\t\t\t\t\tTOTAL SALE = %d\n",totalsale);
   printf("-------------------------------------------------------------\n");
  
  return 0;
}
