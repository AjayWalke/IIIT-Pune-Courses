/*
To implement the quick sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using quick sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int partition(int *array, int start, int end)
{

    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (array[i] < array[pivot])
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
            ++j;
        }
    }
    int temp = array[pivot];
    array[pivot] = array[j];
    array[j] = temp;
    return j;
}

void quick_sort(int *array, int start, int end)
{
    if (start < end)
    {
        int p = partition(array, start, end);
        quick_sort(array, start, p - 1);
        quick_sort(array, p + 1, end);
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
            cout << "--------------Quick Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            quick_sort(arr, 0, l - 1);
            print_array(arr, l);
            cout << "--------------------------------------\n";
        }
        else
        {
            exit(0);
        }
    } while (true);
    return 0;
}
