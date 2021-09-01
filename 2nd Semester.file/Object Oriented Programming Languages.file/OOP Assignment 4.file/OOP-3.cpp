#include <bits/stdc++.h>
using namespace std;

class Add
{
    int m, n;

public:
     // default  constructor
     Add(){
         m = 0;
         n = 0;
     }
     // parameterized constructor
     Add(int a, int b){
         m = a;
         n = b;
     } 

     //Overload addition(+)operator
     //for subtraction of member variable.
     int operator + (){
        return m - n;
     }
};
int main()
{
    Add k(34, 78), n(98, 76);

    // calling operator
    cout << "\nsubtraction :: " << +k;
    cout << "\nsubtraction :: " << +n;
    return 0;
}
/*
WAP to overload addition(+) operator.
Create a class with two integer member variable.
Overload addition (+) operator for
subtraction of member variable.
*/
