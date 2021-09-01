/*
WAP to create a class “Matrix” with following function.
insertValue() - use this function for inserting the value.
searchElement () - take one argument and use this function for searching the given element and
print index if not found print not found.
addAllElements() - takes no arguments use this function for adding all element and print
addition.
*/

#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
  int arr[3][3];
  int n = 3;
  int search;
  int a, b;
  void insertValue()
  {
    cout << "Enter elements \n";
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cin >> arr[i][j];
      }
    }
  }
  void searchindex()
  {
    cout << "Enter the value for searching \n";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        if (arr[i][j] == search)
        {
          cout << "index of element : arr[" << i<<"]["<<j<<"]" << endl;
          a = i;
          b = j;
        }
      }
    }
    if (arr[a][b] != search)
    {
      cout << "Not Found \n";
    }
  }
  void add()
  {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        sum += arr[i][j];
      }
    }
    cout << "addition : " << sum << endl;
  }
};
int main()
{
  Matrix M;
  M.insertValue();
  M.searchindex();
  M.add();
  return 0;
}
