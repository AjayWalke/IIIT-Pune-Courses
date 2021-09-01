/*
WAP to create a class Student with the following member function and variable.
Member Variable (private)
Name
Roll No
Section
Member Function (public)
add()-takes one argument as class object and uses it to assign the value of member
variable.
show()-takes one argument as a class object and prints details of the student.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    int section;

public:
    void setdata(){
        cout<<"Enter the details : \n";
        cin >> name >> roll >> section;
    }
    void add(Student E)
    {
        name = E.name;
        roll = E.roll;
        section = E.section;
    }
    void show(Student E)
    {
        cout << "\nAccessing the values\n";
        cout << "Name : " << E.name<<endl;
        cout << "Roll number : " << E.roll<<endl;
        cout << "Section : " << E.section<<endl;
    }
};
int main()
{
    Student S1,S2;
    S1.setdata();
    S2.add(S1);
    S2.show(S1);
    return 0;
}
