#include<bits/stdc++.h>
using namespace std;

class Base_class
{
public:
   int a;
   void setdata(int m){
          a = m;
   }
   void display(Base_class & b){
       cout << "\nIn Base-class function\n";
       cout << "A :: " << b.a << endl;
       cout << "------------------------\n";
   }
};
 
class Derived_class : public Base_class    // inherited base_class
{
public:
   void show(){
       cout << "\nIn Derived-class function\n";
       cout << "------------------------\n";
   }  
};

int main()
{
  Base_class obj1;
  obj1.setdata(123);

  Derived_class obj2;
  obj2.show();

  cout << "\nCalling base class function "
       <<  "using the object of Derived Class\n";
  obj2.display(obj1);     //base class func by derived class object.

  return 0;
}
/*
Write a simple program to demonstrate Inheritance. Make a base class and a derived class.
Create a display function in base class and call it using the object of Derived Class.
*/
