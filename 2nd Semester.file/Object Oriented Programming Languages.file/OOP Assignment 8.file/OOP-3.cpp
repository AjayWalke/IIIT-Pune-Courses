/*
WAP to demonstrate Exception handling, 
by handling at least two abnormal condition at run
time.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x = -5;
  cout << "------Before try-----\n";
  try
  {
    cout << "In the try \n";
    if (x < 0)
    {
      throw x;
      cout << "After throw\n";
    }
  }
  catch (int x)
  {
    cout << "Exception Caught \n";
  }

  cout << "After catch\n";
  return 0;
}
