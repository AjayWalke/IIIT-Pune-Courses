#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int a, int b, int c, int d){
    printf("\n\n*------------------RECORD OF STUDENTS-----------------------*\n");
    printf("First Class With Distinction:: %d\n",a);
    printf("First Class\t\t    :: %d\n",b);
    printf("Second Class\t\t    :: %d\n",c);
    printf("Pass\t\t\t    :: %d\n",d);
    printf("*------------------END OF RECORD-----------------------*\n");
}

int counting(int *ptr)
{
    
    int a = 0,b=0,c=0,d=0;
    for (int i = 0; i < 18; i++)
    {
        if (*ptr < 50)
        {
            d++;
        }
        if (*ptr > 49 && *ptr < 60)
        {
            c++;
        }
        if (*ptr >59 && *ptr < 75)
        {
            b++;
        }
        if(*ptr> 74)
        {
            a++;
        }
        ptr++;  
    }
    display(a,b,c,d);
}
int main()
{
    int array[18] = {43, 65, 51, 79, 56, 82, 49, 55, 63, 81, 49, 68, 93, 85, 87, 91, 78, 65};
    int*ptr = array;
    counting(array);
    return 0;
}
