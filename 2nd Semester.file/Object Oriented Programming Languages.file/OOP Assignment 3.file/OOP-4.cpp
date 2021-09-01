#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "\nUsing contructor\n";
        char c[100] = "UNKNOWN";
        cout << "Name you passed :: \n";
        cout << c << endl;
    }
    Student(char c[])
    {
        cout << "\nUsing contructor\n";
        cout << "Name you passed :: \n";
        cout << c << endl;
    }
};
int main()
{
    Student s1("Ajay");
    Student s2;
    Student s3("Vijay");
    Student s4("Sanjay");
    Student s5("Danajay");
    return 0;
}
/*
WAP to print name of students byb creating a Student class . If no name is passed while creating
an object of class then insert “Unknown” in name otherwise name should be equal to passed
value while creating the object of the class.
*/
