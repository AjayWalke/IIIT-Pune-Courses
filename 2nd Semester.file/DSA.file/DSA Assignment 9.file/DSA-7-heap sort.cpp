/*
To implement the heap sort
*/
#include <bits/stdc++.h>
using namespace std;

void print_array(int array[], int n)
{
    cout << "\nSorted array using heap sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

// heap sort
void insert_heap(int *array, int n, int k)
{
    int largest = k;
    int left = 2 * k + 1;
    int right = 2 * k + 2;

    if (left < n && array[left] > array[largest])
    {
        largest = left;
    }
    
    if (right < n && array[right] > array[largest])
    {
        largest = right;
    }
    
    if (largest != k)
    {
        int temp = array[k];
        array[k] = array[largest];
        array[largest] = temp;
        insert_heap(array, n, largest);
    }
}

void heap_sort(int *array, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        insert_heap(array, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(array[0], array[i]);
        insert_heap(array, i, 0);
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
            cout << "--------------Heap Sort--------------\n";
            cout << "Enter Number of Elements : ";
            cin >> l;
            int arr[l];
            cout << "Enter the elements :\n";
            for (int i = 0; i < l; i++)
            {
                cin >> arr[i];
            }
            heap_sort(arr, l);
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
