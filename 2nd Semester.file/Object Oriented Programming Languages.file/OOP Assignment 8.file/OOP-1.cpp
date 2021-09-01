/*
WAP to take two values as input from keyboard 
and swap both the values. The input value can
be of any datatype: (integer float, char, string 
etc). (Do not use method overloading).
*/
#include <bits/stdc++.h>
using namespace std;

// used function templates
template <class T>

void Swap(T &a, T &b)
{

  T temp;
  temp = a;
  a = b;
  b = temp;
}

template <class T>
void display(T)
{
  T m, n;
  cout << "Enter the values : \n";
  cin >> m >> n;
  cout << "---------------------------\n";
  cout << "Before swapping : " << m << " " << n << endl;
  Swap<T>(m, n);
  cout << "After swapping : " << m << " " << n << endl;
}

int main()
{
  do
  {
    int m;
    cout << "------------------------\n";
    cout << "1 -> continue\n2 -> exit\n";
    cin >> m;
    if (m == 1)
    {
      string a;
      cout << "Enter the datatypes : ";
      cin >> a;
      display(a);
    }
    else
    {
      exit(0);
    }
  } while (true);
  return 0;
}
