#include <bits/stdc++.h>
using namespace std;

struct polynomial
{
  int coeff;
  int expo;
};

void operations_on_polynomial()
{
  struct polynomial f[20], f1[20], f2[20], f3[20], f4[20];

  cout << "1st:-\n";
  int d;
  cout << "Enter the degree of polynomial ::\n";
  cin >> d;

  //assigning value to the polynomial
  cout << "Enter the coefficient and exponent\n";
  cout << "(starting with constant term & coefficient)\n";
  for (int i = 0; i <= d; i++)
  {
    cin >> f[i].coeff >> f[i].expo;
  }

  cout << "2nd:-\n";
  int d1;
  cout << "Enter the degree of polynomial ::\n";
  cin >> d1;
  cout << "Enter the coefficient and exponent\n";
  cout << "(starting with constant term & coefficient)\n";
  for (int i = 0; i <= d1; i++)
  {
    cin >> f1[i].coeff >> f1[i].expo;
  }

  //writring polynomial   
  cout << "\n1st polynomial\n"; 
  for (int i = d; 0 <= i; i--)
  {
    cout << f[i].coeff << "(x^" << f[i].expo << ")";
    if (i != 0)
    {
      cout << " + ";
    }
  }

  //writring polynomial
  cout << "\n\n2nd polynomial\n"; 
  for (int i = d1; 0 <= i; i--)
  {
    cout << f1[i].coeff << "(x^" << f1[i].expo << ")";
    if (i != 0)
    {
      cout << " + ";
    }
  }  
  //-----------------addition---------------------------
  for (int i = 0; i <= max(d, d1); i++)
  {
    if (i <= min(d, d1))
    {
      f2[i].coeff = f[i].coeff + f1[i].coeff;
      f2[i].expo = i;
    }
    if (d > d1 && i > min(d, d1))
    {
      f2[i].coeff = f[i].coeff;
      f2[i].expo = i;
    }
    if (d < d1 && i > min(d, d1))
    {
      f2[i].coeff = f1[i].coeff;
      f2[i].expo = i;
    }
  }

  //writring polynomial
  cout << "\n\nAddition ::\n";
  for (int i = max(d, d1); 0 <= i; i--)
  {
    cout << f2[i].coeff << "(x^" << f2[i].expo << ")";
    if (i != 0)
      cout << " + ";
  }
  //-------------------------------------------------------

  //-----------------subtraction---------------------------
  for (int i = 0; i <= max(d, d1); i++)
  {
    if (i <= min(d, d1))
    {
      f3[i].coeff = f[i].coeff - f1[i].coeff;
      f3[i].expo = i;
    }
    if (d > d1 && i > min(d, d1))
    {
      f3[i].coeff = f[i].coeff;
      f3[i].expo = i;
    }
    if (d < d1 && i > min(d, d1))
    {
      f3[i].coeff = -f1[i].coeff;
      f3[i].expo = i;
    }
  }

  //writring polynomial
  cout << endl;
  cout << "\nSubtraction :: \n";
  for (int i = max(d, d1); 0 <= i; i--)
  {
    cout << f3[i].coeff << "(x^" << f3[i].expo << ")";
    if (i != 0)
      cout << " + ";
  }
  //--------------------------------------------------

  //---------------multiplication---------------------
  cout << "\n\nMultiplication ::\n";
  for (int i = 0; i <= d+d1; i++)
  {
    f4[i].coeff = 0;
    f4[i].expo = i;
  }
  
  for (int i = 0; i <= d; i++)
  {
    for (int j = 0; j <= d1; j++)
    {
       f4[i+j].coeff += f[i].coeff*f1[j].coeff;
    }
  }

  //writring polynomial
  for (int i = d+d1; i >= 0; i--)
  {
    cout << f4[i].coeff << "(x^" << f4[i].expo <<")";
    if (i != 0)
       cout << " + "; 
  }
  //--------------------------------------------------    
}

int main()
{
  operations_on_polynomial();
  return 0;
}
