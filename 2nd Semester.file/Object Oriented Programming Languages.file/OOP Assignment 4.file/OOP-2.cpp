#include <bits/stdc++.h>
using namespace std;

class Student
{
    int marks;

public:
    void set_marks()
    {
        cout << "Kindly enter your marks : \n";
        cin >> marks;
    }

    // -------------using friend function
    friend bool operator==(Student &s1, Student &s2); 
};

// ------------using assignment operator
bool operator==(Student &s1, Student &s2)
{
    return (s1.marks == s2.marks);
}

int main()
{
    Student a, b;

    // ------user input-----
    a.set_marks();
    b.set_marks();

   //--------calling operator---------- 
    if (a == b)
        cout << "\nMarks of students are equal\n";
    else
        cout << "\nMarks of students are NOT equal\n";
    return 0;
}
/*
WAP to Create a class Student and create member
variable marks.Use Overloaded assignment operator
(=)  to compare two student by using their marks.
*/
