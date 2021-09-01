/*
WAP to make a class name Sum with following function.
-Make two member variable with name No1 and No2 insert value with direct assignment
method with help of object.
-printSum()-take no argument and print sum.
-printAvg() -takes no argument and print Avg
*/

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
     int no1;
     int no2;
     void getdata(){
         cout << "no1 : "<<no1<<endl;
         cout << "no2 : "<<no2<<endl;
     }
     void sum(){
         cout << "Sum of two is : " << no1+no2<<endl;
     }
     void avg(){
         cout << "Average of two nos. : "<<(no1+no2)/2<<endl;
     }
};
int main()
{
  A n;
  n.no1=45;
  n.no2=98;
  n.getdata();
  n.sum();
  n.avg();
  return 0;
}
