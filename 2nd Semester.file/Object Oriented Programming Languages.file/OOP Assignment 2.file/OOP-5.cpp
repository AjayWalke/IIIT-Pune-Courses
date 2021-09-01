/*
WAP to add 2 complex numbers using friend function, return complex number object as a
function return type..
*/
#include <bits/stdc++.h>

using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    
    Complex()
    {
        real = 0;
        imag = 0;
    }
    
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    
    friend Complex add(Complex c1, Complex c2);
    
    void display()
    {
        cout  << real << "+ i" << imag  << endl;
    }
};


Complex add(Complex c1, Complex c2)
{
    
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    Complex c1(98.7, 67.4), c2(39.3, 64.5), c3;
    c3 = add(c1, c2); 
    c1.display();
    c2.display();
    cout << "And the sum is :" << endl;
    c3.display();
    return 0;
}
