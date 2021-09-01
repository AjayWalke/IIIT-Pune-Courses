/*
Write A program to find factorial of given number using tail
recursionExample:5!=5*4*3*2*1
*/

#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
   if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
 int n = 5;
    printf("%d! = %d",n,factorial(n));

return 0;
}
