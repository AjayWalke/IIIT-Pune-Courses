/*
Write a program that generates the following output:
CCCCCCCCC     ++               ++
CC            ++               ++
CC       ++++++++++++++ +++++++++++++++
CC       ++++++++++++++ +++++++++++++++
CC            ++               ++
CCCCCCCCC     ++               ++
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 38; j++)
        {
            if (i == 1 || i == 6)
            {
                if (j <= 9)
                {
                    cout << "C";
                }
                else if ((j == 16 || j == 17)||(j == 31 || j == 32))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (i == 2 || i == 5)
            {
                if (j <= 2)
                {
                    cout << "C";
                }
                else if ((j == 16 || j == 17)||(j == 31 || j == 32))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j <= 2)
                {
                    cout << "C";
                }
                else if ((j >= 10 && j <= 23) || (j >= 25 && j <= 38))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
