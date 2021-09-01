/*
To implement the merge sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using merge sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void merge(int *,int, int , int );

void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}

// merge sort
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        arr[i] = c[i];
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
            cout << "--------------Merge Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            merge_sort(arr, 0, l - 1);
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
