/*
Write a a C++ program and algorithm that asks the user to enter the temperature in
Fahrenheit and outputs the equivalent temperature in Celsius. The formula to convert the
temperature is: Celsius = 5 / 9 * (Fahrenheit – 32).
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  double f,c;
  cout << "Enter the temperature in Fahrenheit :: ";
  cin >> f;
  c = 5.0/9 * (f-32);
  cout << "\n\n"<< f <<"F ---> " << c <<"C";
  return 0;
}
