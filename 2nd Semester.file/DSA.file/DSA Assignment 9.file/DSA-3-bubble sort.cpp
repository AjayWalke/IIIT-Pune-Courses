/*
To implement the bubble sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using bubble sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// bubble sort
void bubble_sort(int array[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    do
    {
        int l, ans;
        cout << "\nPress 1 -> continue\n";
        cin >> ans;
        if (ans == 1)
        {
            cout << "--------------Bubble Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            bubble_sort(arr, l);
            print_array(arr, l);
            cout << "---------------------------------------\n";
        }
        else
        {
            exit(0);
        }
    } while (true);
    return 0;
}
