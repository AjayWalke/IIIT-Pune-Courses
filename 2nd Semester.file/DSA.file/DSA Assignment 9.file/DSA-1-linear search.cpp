/*
To implement the sequential\linear search
*/
#include <bits/stdc++.h>
using namespace std;

int linear_search(int array[], int size, int value)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            cout << "Message : Match Found\n"
                 << "Element is at position : "
                 << i << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "Error : Match not found\n";
    return 0;
}

int main()
{
    int l;
    cout << "-------Sequential or linear search-------\n";
    cout << "Enter Number of Elements : ";
    cin >> l;
    int arr[l];
    cout << "Enter the elemnts :\n";
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    cout << "-----------------------------------------\n";
    do
    {
        int ans, val;
        cout << "\nPress 1 -> continue\n";
        cin >> ans;
        if (ans == 1)
        {
            cout << "Enter the element to search : ";
            cin >> val;
            linear_search(arr, l, val);
        }
        else
        {
            exit(0);
        }
        cout << "---------------------------------------\n";
    } while (true);
    return 0;
}
