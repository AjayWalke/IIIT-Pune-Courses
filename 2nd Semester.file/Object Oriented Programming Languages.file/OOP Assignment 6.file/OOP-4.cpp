/*
WAP to demonstrate derived constructor with following property given below
Class Vehicle:
Vehicle Class will contain a Vehicle constructor, which will say 'This is a Vehicle';.
Class Car:
Car Class will derive the Vehicle Class and contain Car constructor. It will say 'This is a Car'.
Class Bike:
Bike Class will derive the Vehicle Class and contain Bike constructor. it will say 'This is a Bike'.
Now, take an Integer N as an input from user, which will denote the number of Tyres in the
Vehicle. You have to create an object of the appropriate class according to the value of N.
If N = 2, Create a Bike Object.
If N = 4, Create a Car Object.
Otherwise, Create a Vehicle Object.
*/
#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This is a Car\n";
    }
};

class Bike : public Vehicle
{
public:
    Bike()
    {
        cout << "This is a Bike\n";
    }
};

int main()
{
    do
    {
        int N;
        cout << "\nEnter Number of the Tyres('-1' -> exit) : \n";
        cin >> N;
        if (N == 2)
        {
            Bike b;
        }
        else if (N == 4)
        {
            Car c;
        }
        else
        {
            //------exiting from loop------
            int m = N;
            if (m == -1)
            {
                exit(0);
            }
            //-----------------------------
            
            Vehicle v;
        }

    } while (true);
    return 0;
}
