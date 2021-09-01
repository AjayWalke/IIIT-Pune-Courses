#include <bits/stdc++.h>
using namespace std;

class Class_to_Basic
{
private:
    int hr;
    double min;

public:
    Class_to_Basic()
    {
        hr = 0;
        min = 0;
    }
    operator int()
    {
        return hr;
    }
    operator double()
    {
        return min;
    }
    Class_to_Basic(int m)
    {
        cout << "\nClass to Basic Typecasting\n";
        hr = m / 60;
        min = m % 60;
    }
    void display()
    {
        cout << "\nTime(shown by class) :: \n";
        cout << hr << " hr ";
        cout << min << " min\n";
    }
};

int main()
{
    int hr1;
    double min1;
    int s;
    cout << "Enter the minutes :: \n";
    cin >> s;

    Class_to_Basic obj;

    // Class to Basic Typecasting
    obj = s;
    hr1 = obj;
    min1 = obj;
    //---------------------------

    cout << "\nTime(shown by main function) :: \n";
    cout << hr1 << " hr ";
    cout << min1 << " min\n";
    return 0;
}
/*
WAP to Take Duration in min as Class 
Variable and Convert into hour and min as Basic variable
by Using Class to Basic Typecasting.
*/
