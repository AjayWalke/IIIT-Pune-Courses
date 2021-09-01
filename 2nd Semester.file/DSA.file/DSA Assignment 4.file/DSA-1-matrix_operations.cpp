#include <bits/stdc++.h>
using namespace std;

// -----------------------Q.1)checking for upper_triangular-------------------
void check_upper_triangular()
{
    int m;
    cout << "\nEnter the order of square matrix ::\n";
    cin >> m;
    int a[m][m];
    cout << "Enter the matrix to check Upper triangular matrix ::\n";
    int yes = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i][j] == 0)
                yes = 0;
            else
                yes = 1;
        }
    }
    if (yes == 0)
        cout << "Given matrix is UPPER triangular matrix\n";
    else
        cout << "Given matrix is NOT UPPER triangular matrix\n";
}
//-------------------------------------------------------------------------

//---------------------------Q.2)summation diagonal element----------------
void sumof_diagonalelement()
{
    int m;
    cout << "\nEnter the order of square matrix ::\n";
    cin >> m;
    int a[m][m];
    int sum = 0;
    cout << "Enter the matrix for summation of diagonal elements ::\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (i == j)
                sum += a[i][j];
        }
    }
    cout << "Sum of diagonal elements :: " << sum << endl;
}
//-------------------------------------------------------------------------

//---------------------------Q.3)Transpose of matrix-----------------------
void transpose()
{
    int m, n;
    cout << "\nEnter the order of matrix ::\n";
    cin >> m >> n;
    int a[m][n];
    cout << "Enter the matrix for transpose ::\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout << "\ntranpose of matrix :: \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}
//-------------------------------------------------------------------------

//---------------------------Q.4)operations on matrix----------------------
void operation_on_matrix()
{
    int m, n;
    cout << "Enter the order of 1st matrix ::\n";
    cin >> m >> n;
    cout << "Enter 1st matrix :: \n";
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int m1, n1;
    cout << "Enter the order of 2st matrix ::\n";
    cin >> m1 >> n1;
    cout << "Enter 2st matrix :: \n";
    int a1[m1][n1];
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> a1[i][j];
        }
    }
    //-----------------------addition-------------------
    cout << "Addition of matrices :: \n";
    if (m == m1 && n == n1) // checking condition
    {
        int c[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + a1[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error :: order is not similar\n";
    }
    //----------------------------------------------------

    //-----------------------subtraction------------------
    cout << "Subtraction of matrices ::\n";
    if (m == m1 && n == n1) // checking condition
    {
        int c[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] - a1[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error :: order is not similar\n";
    }
    //----------------------------------------------------

    //-----------------------multiply---------------------
    cout << "Multiplication of matrices ::\n";
    if (n == m1) // checking condition
    {
        int c[m][n1];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * a1[k][j];
                }
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error :: Order not similar\n";
    }
    //----------------------------------------------------
}
int main()
{
start:
    int ans;
    cout << "1 -> check upper triangular\n";
    cout << "2 -> sum of diagonal element\n";
    cout << "3 -> transpose\n";
    cout << "4 -> operation on matrix\n";
    cin >> ans;
    switch (ans)
    {
    case 1:
        check_upper_triangular();
        break;
    case 2:
        sumof_diagonalelement();
        break;
    case 3:
        transpose();
        break;
    case 4:
        operation_on_matrix();
        break;
    }

    int a;
    cout << "\n5 -> to do again\n";
    cin >> a;
    if (a == 5)
       goto start;
    else
       exit(0);   
    return 0;
}
