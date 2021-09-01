#include<stdio.h>
#include<string.h>

 int func_add(int add[]){
     int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum = sum + add[i];
        
    }
    printf("The addition of array : %d\n",sum);
 }
  int func_sub(int sub[]){
      int sum = 1000;
      for (int i = 1; i < 8; i++)
    {
        sum = sum - sub[i];
          
    }
     printf("The subtraction of array : %d\n",sum);
  }
  int func_mult(int mult[]){
     int sum = 1;
     for (int i = 0; i < 8; i++)
     {
         sum = sum * mult[i];
         
     }
     printf("The multiplication of array : %d\n",sum);
  }
int main()
{
  int add[8]={10,90,20,40,60,50,30,70};
  int sub[8]={1000,200,100,50,40,20,10,150};
  int mult[8]={9,2,4,5,7,6,8,8};

   func_add(add);
   func_sub(sub);
   func_mult(mult);
return 0;
}
