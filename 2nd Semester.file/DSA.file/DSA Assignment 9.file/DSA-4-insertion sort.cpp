/*
To implement the insertion sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using insertion sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// insertion sort
void insertion_sort(int array[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = array[i];
        int j = i - 1;
        while (temp <= array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
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
            cout << "--------------Insertion Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            insertion_sort(arr, l);
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
