/*
An electricity board charges the following rates to domestic users to discourage large
consumption of energy For the first 100 units 60P per unit For next 200 units 80P per
unit Beyond 300 units 90P per unit. All users are charged a minimum of Rs. 50.00. If
the total amount is more than Rs. 300.00 then an additional surcharge of 15% is
added. Write Program calculate electricity bill for 10 users also display Total unit
consumption and total bills amount For electricity board(Hint: Use For loops with
conditionalstatements).
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int usernum[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int unit[10] = {00, 80, 120, 140, 180, 200, 250, 300, 400, 500};
    float totalbill;

    for (int i = 0; i < 10; i++)
    {
        if (unit[i] <= 100)
        {
            totalbill = (unit[i] * 0.60 + 50);
        }
        else if (unit[i] <= 300)
        {
            totalbill = (unit[i] * 0.80 + 50);
        }
        else if (unit[i] > 300)
        {
            totalbill = (unit[i] * 0.90 + 50);
        }

        
        if (totalbill < 300)
        {
            totalbill = totalbill;
        }
        else if (totalbill>300)
        {
           totalbill = totalbill*0.15 + totalbill;
        }
               
            printf("The total bill amount for user %d having units %d is %.2f.\n", usernum[i], unit[i], totalbill);
    }
    return 0;
}
