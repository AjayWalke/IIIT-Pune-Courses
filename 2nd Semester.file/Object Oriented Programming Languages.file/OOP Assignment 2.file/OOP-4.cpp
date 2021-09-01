/*
WAP to create class Marksheet and Student following member function and variable.
-In Student class create variable Name Roll No and Marks
=>Marksheet:
-create array of objects of Class Student
-addSMark()-takes no argument,Create Student object assign values of and make
records of students
-showMark()-takes one argument roll no, search student details using roll no. in array and
print student details(name, rollNo., Marks) matching with given roll no.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
public:
    char name[20];
    int roll;
    int section;
    void setdata()
    {
        cout << "\nNAME : ";
        cin >> name;
        cout << "roll no : ";
        cin >> roll;
        cout << "section : ";
        cin >> section;
    }
    void passdata(Student &, Student &, Student &);
};
class Marksheet
{

public:
    char name1[100][20];
    int roll1[100];
    int section1[100];
    void passdata(Student &n, Student &r, Student &s)
    {
        for (int i = 0; i < 100; i++)
        {
            for (int i1 = 0; i1 < 20; i1++)
            {
                name1[i][i1] = n.name[i1];
            }
            roll1[i] = r.roll;
            section1[i] = s.section;
        }
    }
    void serach_details(int rollno)
    {
        int a;
        for (int i = 0; i < 100; i++)
        {
            if (rollno == roll1[i])
            {
                a = i;
            }
        }
        cout << "\nHere is details of student :\n";
        cout << "Name : " << name1[a] << endl;
        cout << "Roll no : " << roll1[a] << endl;
        cout << "Section : " << section1[a] << endl;
    }
};
int main()
{
    Student s1, s2, s3;
    Marksheet m1;
    s1.setdata();
    m1.passdata(s1, s1, s1);
    s2.setdata();
    m1.passdata(s2, s2, s2);
    s3.setdata();
    m1.passdata(s3, s3, s3);
    int d;
    cout << "\nRoll number to serach : \n";
    cin >> d;
    m1.serach_details(d);
    return 0;
}
