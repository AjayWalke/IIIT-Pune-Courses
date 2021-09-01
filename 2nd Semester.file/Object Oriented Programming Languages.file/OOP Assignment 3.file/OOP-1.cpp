/*WAP to create a class with any name make a constructor and destructor. Inside constructor
create a dynamic array of length 5 insert value into array and count no odd and even no present
in array and print. Finally destroy the array in destructor.
*/

#include <bits/stdc++.h>
using namespace std;

class Const
{
private:
    int arr[5];
    int even = 0;
    int odd = 0;

public:
    Const()     // constructor......
    {
        cout << "Enter the value of array :\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void count()
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    void display()
    {
        cout << "\nThis is the array elements :\n";
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n\nEven numbers : " << even << endl;
        cout << "\nOdd numbers : " << odd << endl;
    }
    ~Const()       // destructor.....
    {
        cout << "\nDeleting array.....\n";
        delete [] arr;
        cout << "Deleted Successfully..";
    }
};
int main()
{
    Const c1;
    c1.count();
    c1.display();
    // c1.~Const();
    return 0;
}
