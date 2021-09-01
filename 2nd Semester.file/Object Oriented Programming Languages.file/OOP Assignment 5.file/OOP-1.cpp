#include <bits/stdc++.h>
using namespace std;

class Basic_to_Class
{
private:
    int hr, min;

public:
    Basic_to_Class();
    Basic_to_Class(int);
    void display();
};

Basic_to_Class ::Basic_to_Class()
{
    hr = 0;
    min = 0;
}

Basic_to_Class ::Basic_to_Class(int m)
{
    cout << "\nBasic to Class Typecasting\n";
    hr = m / 60;
    min = m % 60;
}

void Basic_to_Class ::display()
{
    cout << "\nTime :: \n";
    cout << hr << " hr ";
    cout << min << " min\n";
}
int main()
{
    int s;
    cout << "Enter the minutes :: \n";
    cin >> s;

    Basic_to_Class time;
    time = s; //Basic to Class Typecasting
    time.display();
    return 0;
}
/*
WAP to Take Duration in minute as Basic variable
and convert into hour and min as class
variable by using Basic to Class Typecasting.
*/
