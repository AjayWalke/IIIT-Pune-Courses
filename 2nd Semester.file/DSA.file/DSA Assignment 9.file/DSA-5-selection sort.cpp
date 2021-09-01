/*
To implement the selection sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using selection sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// selection sort
void selection_sort(int array[], int n)
{
    int min_index;
    for (int i = 0; i <= n; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
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
            cout << "--------------Selection Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            selection_sort(arr, l);
            print_array(arr, l);
            cout << "-----------------------------------------\n";
        }
        else
        {
            exit(0);
        }
    } while (true);
    return 0;
}
