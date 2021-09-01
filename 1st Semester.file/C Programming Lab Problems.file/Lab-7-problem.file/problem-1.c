/*
Write a simple program to manage shopping cart with product Id a) add inventory b)
Display Details of product c) Display bill. Assume Total Number of user is Restricted
to 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct inventory
{
   char product[20];
   int id;
   int quantity;
   int price;
};

int main()
{
   int id1;

   struct inventory user[4];
   strcpy(user[0].product, "Computer");
   user[0].id = 101;
   user[0].price = 35000;
   strcpy(user[1].product, "Mobile");
   user[1].id = 102;
   user[1].price = 15000;
   strcpy(user[2].product, "Desktop");
   user[2].id = 103;
   user[2].price = 50000;
   strcpy(user[3].product, "Processer");
   user[3].id = 104;
   user[3].price = 9000;

    printf("Welcome to shop\n\nWe have\n");
   for (int i = 0; i < 4; i++)
   {
    printf("id-%d\tname-%s\tprice-%d\n",user[i].id,user[i].product,user[i].price);
   }
   
   printf("\nEnter product id\n");
   scanf("%d", &id1);
   for (int i = 0; i < 4; i++)
   {
      if (id1 == user[i].id)
      {
         printf("Enter quantity\n");
         scanf("%d", &user[i].quantity);
         printf("\n\n-------------------------------------------------------------\n");
         printf("PRODUCTNAME  ID  QUANTITY  PRICE  TOTALPRICE\n ");
         printf("%10s%4d%9d%8d%10d", user[i].product, user[i].id, user[i].quantity, user[i].price, user[i].quantity * user[i].price);
         printf("\n-------------------------------------------------------------\n");
      }
   }
}
