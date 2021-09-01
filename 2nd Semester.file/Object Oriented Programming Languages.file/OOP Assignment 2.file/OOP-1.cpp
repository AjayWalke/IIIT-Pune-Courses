/*
WAP to create two classes with any name, create private variables to both and create a
friend function to add both numbers and print sum.
*/

#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
private:
    int a;
    friend void sum(A &, B &);

public:
    void setdata()
    {
        cout << "Enter a : ";
        cin >> a;
    }
};
class B
{
private:
    int b;
    friend void sum(A &, B &);

public:
    void setdata()
    {
        cout << "Enter b : ";
        cin >> b;
    }
};
void sum(A &x, B &y)
{
    int sum;
    sum = x.a + y.b;
    cout << "sum = " << sum << endl;
}
int main()
{
    A a;
    a.setdata();
    B b;
    b.setdata();
    sum(a,b);
    return 0;
}
