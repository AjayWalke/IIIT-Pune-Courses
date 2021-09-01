/*
Write program to obtain first 10 numbers Fibonacciseries. Fibonacciseries sum of
two successive number give third number.Example:1 1 2 3 5 8 13 21 34 55
89....
*/

#include<stdio.h>
#include<stdlib.h>

int fib(int num){
    if (num== 1 || num== 2)
    {
        return 1;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}

int main()
{

printf("First 10 numbers of the fibonacci series\n");

for(int i =1;i<11;i++){
printf("%d\t",fib(i));
}
 return 0;
}
