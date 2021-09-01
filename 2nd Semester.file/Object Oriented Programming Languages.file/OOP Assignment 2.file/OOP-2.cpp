/*
WAP to create two classes Sam and Tom declare class Tom as a friend class of Sam.
Create a private member function in Sam class and access from Tom class.
*/

#include <iostream>
using namespace std;

class Tom;

class Sam
{
public:
    void showTom(Tom &);
};

class Tom
{
private:
    int a;

public:
    Tom()
    {
        a = 5;
    }
    friend void Sam::showTom(Tom &x);
};

void Sam::showTom(Tom &x)
{
    std::cout << "Accessed member of Class Tom:" << x.a;
}

int main()
{
    Sam b;
    Tom x;
    b.showTom(x);
    return 0;
}
