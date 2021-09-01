/*
Write Program To Display The Following Outputs using for loops
1
22
333
4444
55555
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int a;
        printf("Enter the no of the rows : \n");
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
                for (int j = 1; j < i+1; j++)
                {
                        printf("%d", i);
                }
                printf("\n");
        }
        return 0;
}
