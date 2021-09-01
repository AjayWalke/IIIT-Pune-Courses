/*
To implement the binary search
*/
#include <bits/stdc++.h>
using namespace std;

// iterative approach of binary search
int iterative_binary(int array[], int value, int low, int high)
{
    int flag = 0;
    while (low <= high)
    {
        int mid;
        mid = (high + low) / 2;

        if (array[mid] == value)
        {
            cout << "Message : Match Found\n"
                 << "Element is at position : "
                 << mid << endl;
            flag = 1;
            return mid;
        }
        if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (flag == 0)
        cout << "Error : Match not found\n";
    return 0;
}

// recursive approach of binary search
int recursive_binary(int array[], int value, int low, int high)
{
    int flag = 0;
    while (low <= high)
    {
        int mid;
        mid = (high + low) / 2;

        if (array[mid] == value)
        {
            cout << "Message : Match Found\n"
                 << "Element is at position : "
                 << mid << endl;
            flag = 1;
            return mid;
        }
        // left half
        else if (array[mid] > value)
        {
            return recursive_binary(array, value, low, mid - 1);
        }
        // right half
        else
        {
            return recursive_binary(array, value, mid + 1, high);
        }
    }
    if (flag == 0)
        cout << "Error : Match not found\n";
    return 0;
}
int main()
{
    int l;
    cout << "--------------Binary search-------------\n";
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
            cout << "\nIterative approach : \n";
            iterative_binary(arr, val, 0, l - 1);
            cout << "\nRecursive approach : \n";
            recursive_binary(arr, val, 0, l - 1);
        }
        else
        {
            exit(0);
        }
        cout << "---------------------------------------\n";
    } while (true);
    return 0;
}
