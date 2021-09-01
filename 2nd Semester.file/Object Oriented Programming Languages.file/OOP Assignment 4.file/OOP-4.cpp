#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    double real, imag;
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }

    Complex operator +(Complex);
    
    void display(){
        cout << "Complex No. :: "
             << real << " + "  
             << imag << "i\n";
    }
};

Complex Complex :: operator +(Complex c)
{
    Complex t;
    t.real = real + c.real;
    t.imag = imag + c.imag;
    return t;
}
int main()
{
    Complex a(3, 5), b(9, 6), c;
    
    // displaying the number
    a.display();
    b.display();
    
    // calling the operator
    c = a + b;
    c.display();

    return 0;
}
/*
WAP to add two complex numbers using
operator overloaded by a friend function.
*/
