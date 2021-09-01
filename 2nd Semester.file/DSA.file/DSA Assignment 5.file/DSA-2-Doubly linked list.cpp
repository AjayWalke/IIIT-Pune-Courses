/*
Write a C++ program to sort binary numbers with the help of doubly linked list. Write
functions for
a) Addition of two binary numbers
b) Calculation of 1’s complement of a given binary number
c) Calculation of 2’s complement of a given binary number
*/

#include<bits/stdc++.h>
using namespace std;

class binary_operations;

//-----------creating a doubly linked list-------
class node
{
    node *prev;
    bool n;
    node *next;

public:
    node()
    {
        prev = next = NULL;
    }
    node(bool b)
    {
        n = b;
        prev = next = NULL;
    }
    friend class binary_operations;
};
//-----------------------------------------------

class binary_operations
{
    node *start;

public:
    binary_operations()
    {
        start = NULL;
    }
    void generate_Binary(int no);
    void display_Binary();
    void ones_Complement();
    void twos_complement();
    binary_operations operator+(binary_operations n1);
    bool add_At_begin(bool val)
    {
        node *nodee = new node(val);
        if (start == NULL)
        {
            start = nodee;
        }
        else
        {
            nodee->next = start;
            start->prev = nodee;
            start = nodee;
        }
        return true;
    }
};

//----------creating a binary number----------
void binary_operations::generate_Binary(int no)
{
    bool rem;
    node *p;
    rem = no % 2;
    start = new node(rem);
    no = no / 2;
    while (no != 0)
    {
        rem = no % 2;
        no = no / 2;
        p = new node(rem);
        p->next = start;
        start->prev = p;
        start = p;
    }
}
//------------------------------------------------

//--------------displaying a binary number--------
void binary_operations::display_Binary()
{
    node *t;
    t = start;
    while (t != NULL)
    {
        cout << t->n;
        t = t->next;
    }
    cout << "\n";
}
//--------------------------------------------------

//-----------adding two binary numbers------------
binary_operations binary_operations::operator+(binary_operations n1)
{
    binary_operations sum;
    node *a = start;
    node *b = n1.start;
    bool carry = false;
    while (a->next != NULL)
        a = a->next;
    while (b->next != NULL)
        b = b->next;

    while (a != NULL && b != NULL)
    {
        sum.add_At_begin((a->n) ^ (b->n) ^ carry);
        carry = ((a->n && b->n) || (a->n && carry) || (b->n && carry));

        a = a->prev;
        b = b->prev;
    }
    while (a != NULL)
    {
        sum.add_At_begin(a->n ^ carry);
        a = a->prev;
    }
    while (b != NULL)
    {
        sum.add_At_begin(b->n ^ carry);
        b = b->prev;
    }
    sum.add_At_begin(carry);
    return sum;
}
//--------------------------------------------------

//------------------finding 1's complement----------
void binary_operations::ones_Complement()
{
    node *t;
    t = start;

    while (t != NULL)
    {
        if (t->n == 0)
            t->n = 1;
        else
            t->n = 0;

        t = t->next;
    }
}
//------------------------------------------------

//------------------finding 2's complement----------
void binary_operations::twos_complement()
{
    ones_Complement();
    bool carry = 1;
    node *b;
    b = start;
    while (b->next != NULL)
    {
        b = b->next;
    }
    while (b != NULL)
    {
        if (b->n == 1 && carry == 1)
        {
            b->n = 0;
            carry = 1;
        }
        else if (b->n == 0 && carry == 1)
        {
            b->n = 1;
            carry = 0;
        }
        else if (carry == 0)
            break;

        b = b->prev;
    }
    display_Binary();
}
//------------------------------------------------

int main()
{
    int num, num1;
    binary_operations n1, n2, n3;
    int choice = 1;

    //---------------------menu driven---------------
    do
    {
        cout << "\n----------Binary Number Operations----------\n";
        cout << "1. Generate binary\n2. Addition\n3. 1's Complement"
             << "\n4. 2's Complement\n5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter Number in decimal form: ";
            cin >> num;
            n1.generate_Binary(num);
            cout << "\nBinary Representation: ";
            n1.display_Binary();
            break;
        case 2:
            cout << "\nEnter Two Numbers: ";
            cin >> num >> num1;
            n1.generate_Binary(num);
            n2.generate_Binary(num1);
            n1.display_Binary();
            cout << " + \n";
            n2.display_Binary();
            cout << " = \n";
            n3 = n1 + n2;
            n3.display_Binary();
            break;
        case 3:
            cout << "\nEnter Number in decimal form: ";
            cin >> num;
            n1.generate_Binary(num);
            cout << "\nBinary Representation: ";
            n1.display_Binary();
            cout << "\n1's Complement: ";
            n1.ones_Complement();
            n1.display_Binary();
            break;
        case 4:
            cout << "\nEnter Number in decimal form: ";
            cin >> num;
            n1.generate_Binary(num);
            cout << "\nBinary Representation: ";
            n1.display_Binary();
            cout << "\n2's complement: ";
            n1.twos_complement();
            break;
        case 5:
		    exit(0);    
        }
    } while (choice != 0);
    return 0;
}
