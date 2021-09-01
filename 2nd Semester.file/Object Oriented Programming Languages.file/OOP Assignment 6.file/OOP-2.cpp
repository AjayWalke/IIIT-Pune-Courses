/*
multilevel inheretance
*/
#include <bits/stdc++.h>
using namespace std;

class Base1
{
protected:
    int mis;

public:
    void set_mis();
    void get_mis(void);
};

void Base1 ::set_mis()
{
    cout << "Enter MIS : ";
    cin >> mis;
}
void Base1 ::get_mis(void)
{
    cout << "MIS No. : " << mis << endl;
}

class Base2 : public Base1 // Base1 ----inherited---> Base2
{
protected:
    float OOPM;
    float DSA;

public:
    void set_marks();
    void get_marks(void);
};

void Base2 ::set_marks()
{
    cout << "Enter the OOPM marks : ";
    cin >> OOPM;
    cout << "Enter the DSA marks : ";
    cin >> DSA;
}
void Base2 ::get_marks(void)
{
    cout << "OOPM : " << OOPM << endl;
    cout << "physics : " << DSA << endl;
}

class Base3 : public Base2 // Base2 ----inherited---> Base3
{
    float percentage;

public:
    void display()
    {
        set_mis();
        set_marks();
        cout << "\n---------------Details------------------\n";
        get_mis();
        get_marks();
        cout << "------------------------------------------\n";
        cout << "\n-----------------Result-------------------\n";
        cout << "percentage : " << (OOPM + DSA) / 2 << endl;
        cout << "--------------------------------------------\n";
    }
};

int main()
{
    Base3 f;
    f.display();
    return 0;
}
