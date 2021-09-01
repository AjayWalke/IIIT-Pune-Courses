/*
Write A simple C application To Demonstrate Banking System For 5 Users .A System
Will Do Following Operation 1.Deposit 2.WithDrwal 3. Transfer 4. Mini Statement. A
System Also Verify if Amount is valid or not for withdrawal and transfer .Make
Complete Application As Menu Driven .Display Proper Output.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[5] = {104, 405, 304, 500, 508};
char name[5][50] = {"Amit Shah", "Vinit Desai", "Souram D", "Rohit Singh", "Soham Roy"};
int bal[5] = {2000, 5000, 8000, 10000, 20000};
int userinput;
int userinputtransfer;
int serialno;
int transferno;

int depositA()
{
  int deposit;
  printf("Enter amount to deposit: ");
  scanf("%d", &deposit);
  bal[serialno] += deposit;
  printf("Your name: %s\t balance: Rs%d\n", name[serialno], bal[serialno]);
}
int withdrawA()
{
  int withdraw;
  printf("Enter amount to withdraw: ");
  scanf("%d", &withdraw);
  if (withdraw <= bal[serialno])
  {
    bal[serialno] -= withdraw;
    printf("Your name: %s\t balance is Rs%d", name[serialno], bal[serialno]);
  }
  else
  {
    printf("Not enough balance for withdraw\n");
  }
}
int transferA()
{
  int transfer;
  printf("Transfer account serial no and account no: ");
  scanf("%d %d", &transferno, &userinputtransfer);
  if (transfer <= bal[serialno])
  {
    printf("Enter amount to transfer: ");
    scanf("%d", &transfer);
    bal[serialno] -= transfer;
    bal[transferno] += transfer;
    printf("Your name: %s\t balance is Rs%d\n", name[serialno], bal[serialno]);
    printf("Amount transfered to name: %s\t balance is Rs%d\n", name[transferno], bal[transferno]);
  }
  else
  {
    printf("Not enough balance to transfer\n");
  }
}
void ministatement()
{

  printf("\n----------------------------------------\n");
  printf("Your account no.: %d\n", userinput);
  printf("Your name: %s\n", name[serialno]);
  printf("Your balance: %d", bal[serialno]);
  printf("\n----------------------------------------\n");
}
int main()
{
  char choice;
  char word;
  do
  {
    printf("please enter serial no. your account no.: ");
    scanf("%d %d", &serialno, &userinput);
    printf("d for deposit\nw for withdraw\nt for transfer\nm for ministatement\n");
    scanf(" %c", &word);
    switch (word)
    {
    case 'd':
      depositA();
      break;
    case 'w':
      withdrawA();
      break;
    case 't':
      transferA();
      break;
    case 'm':
      ministatement();
      break;
    }
    printf("\nEnter y for continue\n");
    scanf(" %c", &choice);
  } while (choice == 'y');

  return 0;
}
