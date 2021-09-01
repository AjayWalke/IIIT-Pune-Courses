/*
Write A program to which data of 10 students and calculate a).Find average mark
and class of students b).Determine class Average c) Calculate Frequency of Class
students based on Grades. D).Find out Two Topers students in Class. E)Display Final
Result Summary in Both Ascending And Descending Order Note: Use Name of Or
MISNO students in array. Use Subject Array. Display Percentage .Use Separate
Functions for Each Operation and Return Array from Ascending and Descending
order of result.
*/

#include <stdio.h>
#include <stdlib.h>

float*average_marks(int sub1[], int sub2[], int sub3[]){
   float* Average = malloc(10 * sizeof(float));
   float classAverage = 0;
    for (int i = 0; i < 10; i++)
    {   Average[i] = (float)(sub1[i] + sub2[i] + sub3[i]) / 3;
        classAverage += Average[i];  
    }
    classAverage/=10;
    printf("\nClass average = %.2f\n",classAverage);
    return Average;
}
void class(float Average[])
{    int f = 0, s = 0, t = 0;
    for (int i = 0; i < 10; i++)
    {   if (Average[i] < 60){
            t++;
        }
        else if (Average[i] < 75){
            s++;
        }
        else{
            f++;
        }
    }
    printf("\nFirst class with distinction = %d students\n First class = %d students\n Second class = %d students\n", f, s, t);
}
int topper(float Average[],int MISNO[]){
    printf("\n1st topper MISNO %d percentage %f\n2st topper MISNO %d percentage %f\n",MISNO[9],Average[9],MISNO[8],Average[8]);
}
int result(int MISNO[],int sub1[],int sub2[],int sub3[],float Average[])
{
  printf("\n----------------------------------------------------\n");
  printf("MISNO  sub1  sub2  sub3  average_marks\n");
  for (int i = 0; i < 10; i++)
  {
      printf("%5d%6d%6d%6d%12.2f\n",MISNO[i],sub1[i],sub2[i],sub3[i],Average[i]);
  }
  printf("\n----------------------------------------------------\n"); 
}
int main()
{   int MISNO[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
    int sub1[10] = {70, 76, 77, 60, 68, 67, 70, 72, 75, 89};
    int sub2[10] = {60, 60, 72, 69, 68, 67, 70, 72, 75, 89};
    int sub3[10] = {60, 60, 72, 69, 68, 67, 70, 72, 75, 89};
    printf("\nTotal number of students is 10\n");
    float*Average= average_marks(sub1, sub2, sub3);
    class(Average);
    topper(Average,MISNO);
    result(MISNO,sub1, sub2, sub3,Average);

    return 0;
}
