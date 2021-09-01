/*
WAP to design a library managament system using atleast 1 class. The management system has 4
features:
1. Withdraw a book (Do not delete the book from system. Just mark the status variable of the
book as unavailable)
2. Add a book (Unique ID, Name of book, Name of author, Status: Available or Unavailable,
Genre, Price, Number of pages)
3. Search a book in system (input can be onoe of UID, book title or author title)
4. Exit the system
*/

#include <bits/stdc++.h>
using namespace std;

class Library
{
public:
  int id;
  string name;
  string author;
  int price;
  int pages;
  int quantity;
  int a;
  void setdata()
  {
    cout << "\nWelcome to IIIT Pune Library\n";
    cout << "press \n1 : withdraw\n2 : add\n3 : search \n";
    cin >> a;
    if (a == 1)
    {
      int id1;
      cout << "Enter id : " << endl;
      cin >> id1;
      for (int i = 1; i < 3; i++)
      {
        if (id1 == id)
        {
          quantity--;
        }
      }
      cout << " You withdraw book successfully!!!\n";
      exit(0);
    }
    if (a == 2)
    {
      int id2;
      cout << "Enter id : " << endl;
      cin >> id2;
      for (int i = 1; i < 3; i++)
      {
        if (id2 == id)
        {
          quantity++;
        }
      }
      cout << " You add book successfully!!!\n";
      exit(0);
    }
    if (a == 3)
    {
      int id3;
      cout << "Enter the id for search \n";
      cin >> id3;
       for (int i = 1; i < 3; i++)
      {
        if (id3 == id)
        {
          cout << "Available books : " << quantity<<endl;
          if(quantity == 0){
             cout << "Status :: Not Available\n";
          }
          else
          {
            cout << "Status ::  Available\n";
          }
          
        }
      }
      exit(0);
    }
  }
};

int main()
{
  Library b[3];
  b[0].id = 1;
  b[0].name = "c";
  b[0].author = "Balaguru";
  b[0].price = 560;
  b[0].pages = 800;
  b[0].quantity = 4;

  b[1].id = 2;
  b[1].name = "c++";
  b[1].author = "E-Balaguru";
  b[1].price = 600;
  b[1].pages = 900;
  b[1].quantity = 4;

  b[2].id = 3;
  b[2].name = "c#";
  b[2].author = "E Balaguru";
  b[2].price = 650;
  b[2].pages = 1000;
  b[2].quantity = 4;
  
  b->setdata();
  return 0;
}
