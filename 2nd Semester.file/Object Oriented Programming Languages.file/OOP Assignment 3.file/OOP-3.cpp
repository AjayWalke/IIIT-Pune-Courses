#include <bits/stdc++.h>
using namespace std;
#include <typeinfo>

class Const_overload
{
public:
    Const_overload()
    {
        cout << "Now just arrived in constructor 1 overloading\n";
        int a = 23;
        cout << "Value of a in constructor(by default) :" << a << endl;
        cout << "type : " << typeid(a).name() << endl;
    }
    Const_overload(int r)
    {
        cout << "\nNow just arrived in constructor 2 overloading\n";
        cout << "Entered value : " << r << "\ntype : " << typeid(r).name() << endl;
    }
    Const_overload(float c, int d)
    {
        cout << "\nNow just arrived in constructor 3 overloading\n";
        cout << "Entered value : " << c << "\ntype : " << typeid(c).name() << endl;
        cout << "Entered value : " << d << "\ntype : " << typeid(d).name() << endl;
    }
    Const_overload(char c)
    {
        cout << "\nNow just arrived in constructor 4 overloading\n";
        cout << "Entered value : " << c << "\ntype : " << typeid(c).name() << endl;
    }
};
int main()
{
    Const_overload c1;
    Const_overload c2(98);
    Const_overload c3(2.3,56);
    Const_overload c4('h');
    return 0;
}
/*
WAP to create a class with any name. Create multiple constructor and show constructor
overloading.
*/
