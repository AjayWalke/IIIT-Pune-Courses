#include <bits/stdc++.h>
using namespace std;
#define pi 3.14

class Area
{
public:
    void getArea(int a1, int b1)
    {
        long long int a;
        cout << "\nFinding the area of rectangle:\n";
        a = a1 * b1;
        cout << "Area of given rectangle :: " << a << endl;
    }
    void getArea(long long int s)
    {
        long long int a;
        cout << "\nFinding the area of square:\n";
        a = s * s;
        cout << "Area of given square :: " << a << endl;
    }
    void getArea(int r)
    {
        long long int a;
        cout << "\nFinding the area of circle:\n";
        a = pi * r * r;
        cout << "Area of given circle :: " << a << endl;
    }
    void getArea(double r, double h)
    {
        long long int a;
        cout << "\nFinding the area of cylinder:\n";
        a = 2 * pi * r * h;
        cout << "Area of given cylinder :: " << a << endl;
    }
    void getArea(double r)
    {
        long long int a;
        cout << "\nFinding the area of sphere:\n";
        a = 4 * pi * r * r;
        cout << "Area of given sphere :: " << a << endl;
    }
};
int main()
{
    Area a;
    a.getArea(2, 4);
    a.getArea(256489);
    a.getArea(8);
    a.getArea(2.3, 4.3);
    a.getArea(5.5);
    return 0;
}
/*
WAP to create a class ‘Area’ and create multiple function with name “getArea” and overload the
function getArea by differing formal parameters and calculate and print area of different
geometrical shape.(Calculate atleast Area of two shape).
*/
