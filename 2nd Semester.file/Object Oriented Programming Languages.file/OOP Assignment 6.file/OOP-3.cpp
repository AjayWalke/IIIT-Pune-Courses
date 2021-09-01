/*
Create two classes: class_1 and class_2 and inherit class_2 from class_1. Make a parameterized
constructor in derived class as well as base class. Create object of derived class and print the
messages written in constructors.
*/
#include <bits/stdc++.h>
using namespace std;

class Class_1 // Base class
{
private:
    int lucky_no;

public:
    Class_1() { lucky_no = 0; };
    Class_1(int i)
    {
        lucky_no = i;
        cout << "\n----Base Class constructors-------";
        cout << "\nYour lucky Number : ";
        cout << lucky_no << endl;
        cout << "----------------------------------\n";
    }
};

// creates derived class
class Class_2 : public Class_1
{
private:
    char lucky_color[20];
    Class_1 Cla;

public:
    Class_2(){};
    Class_2(int i, char *b) : Cla(i)
    {
        strcpy(lucky_color, b);
    }
    void Class2_getData()
    {
        cout << "-----Derived Class constructors-----";
        cout << "\nYour lucky color : ";
        cout << lucky_color << endl;
        cout << "----------------------------------\n";
    }
};

int main()
{
    Class_2 c(50, "Purple");

    // printing message written in constructors
    c.Class2_getData();
    return 0;
}
