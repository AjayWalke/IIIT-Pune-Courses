/*
WAP to create a class and some member function with any name and create object of same and
access the member function with arrow operator (->).
*/

#include <bits/stdc++.h>
using namespace std;

class Adf
{
public:
  int a;
  void getdata()
  {
    int a1 = 90;
    a = a1;
    cout << "Using arrow operator\n\nvalue of a : " << a1 << endl;
  }
};

int main()
{
  Adf *obj = new Adf;
  obj->getdata();
  return 0;
}
