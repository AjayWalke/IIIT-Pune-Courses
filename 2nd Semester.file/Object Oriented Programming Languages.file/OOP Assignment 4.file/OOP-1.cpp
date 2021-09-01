#include <bits/stdc++.h>
using namespace std;

class Incremt_decremt
{
    int a, b;

public:
    // --------------setting data-------
    void setdata()
    {
        cout << "Enter a ::\n";
        cin >> a;
        cout << "Enter b ::\n";
        cin >> b;
    }

    // -----------increment----------
    void operator++()
    {
        a = ++a;
        b = ++b;
    }
    void increment_display()
    {
        cout << "\nAfter pre-increment ::\n"
             << "a : " << a << endl 
             << "b : " << b << endl;
    }

    //-----------decrement------------
    void operator--()
    {
        a = --a;
        b = --b;
    }
    void decrement_display()
    {
        cout << "\nAfter pre-decrement ::\n"
             << "a : " << a << endl
             << "b : " << b << endl;
    }
};

int main()
{
    Incremt_decremt P;
    
    // Taking user input
    P.setdata();

    // calling incerment operator
    ++P;
    P.increment_display();

    // calling decrement operator
    --P;
    P.decrement_display(); 
    return 0;
}
/*
WAP to Overload Unary Operator(--,++).Create a class with some member
variable increment and decrement value of member variable
by overloading increment and decrement operator.
*/
