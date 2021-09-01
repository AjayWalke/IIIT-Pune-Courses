/*
WAP to make a class and a function with any name and count how many time that function
is called by same object.
*/

#include<bits/stdc++.h>
using namespace std;

class Temper{
  public:
   int count = 0;
   void display(){
       cout << "\n\nIn class..\nClass is called\ncount = "<<count<<endl;
       count++;
   }
};
int main()
{
   Temper t;
   t.display();
   t.display();
   t.display();
   t.display();
   t.display();
   return 0;
}
