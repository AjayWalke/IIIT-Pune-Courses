#include <bits/stdc++.h>
using namespace std;

class Class_to_Class
{
private:
    int duration;

public:
    Class_to_Class(int n)
    {
        duration = n;
    }
    int time_hr()
    {
        int hr;
        cout << "\nClass 1 : Class to Class typecasting\n";
        hr = duration / 60;
        return hr;
    }
    int time_min()
    {
        int min;
        cout << "\nClass 2 : Class to Class typecasting\n";
        min = duration % 60;
        return min;
    }
    void display1()
    {
        cout << "Duration :: ";
        cout << duration << endl;
    }
};

class Sender_in_typecast
{
private:
    int hr, min;

public:
    Sender_in_typecast()
    {
        hr = 0;
        min = 0;
    }
    void operator=(Class_to_Class obj)
    {
        hr = obj.time_hr();
        min = obj.time_min();
    }
    void display2()
    {
        cout << "\nTime :: \n";
        cout << hr << " hr ";
        cout << min << " min\n";
    }
};

int main()
{
    int s;
    cout << "Enter the minutes :: \n";
    cin >> s;

    Class_to_Class obj1(s);
    obj1.display1();

    Sender_in_typecast obj2;
    obj2 = obj1; // class to class typecasting

    obj2.display2();
    return 0;
}
/*
WAP to Take Duration as Class Variable and 
Convert in hour and min as Class variable by using
Class to Class Typecasting. (Use Constructor).
*/
