/*
WAP to create a file named "Emp.txt"�. 
Now enter details in file with employee name,
designation, date of birth, salary. 
Later read the file and print details. Handle exception if
needed.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class File_handle
{
private:
    char name[20];
    int salary;
    string birth_date;
    char designation[20];

public:
    void set_data();
    void get_data();
};

void File_handle ::set_data()
{
    cout << "Enter the employee name : ";
    cin.getline(name, 20);
    cout << "Enter the salary        : ";
    cin >> salary;
    cout << "Enter the birth date    : ";
    cin >> birth_date;
    cout << "Enter the designation   : ";
    cin >> designation;
}

void File_handle ::get_data()
{
    cout << "The employee name : " << name << "\n";
    cout << "The salary        : " << salary << "\n";
    cout << "The birth date    : " << birth_date << "\n";
    cout << "The designation   : " << designation << "\n";
}


int main()
{
    ofstream emp;
    emp.open("D:\\cpp programing\\emp.txt", ios ::out | ios::binary);
    File_handle file1;
    file1.set_data();
    emp.write((char *)&file1, sizeof(file1));
    cout << "Details of employee added\n";
    emp.close();

    ifstream emp1;
    emp1.open("D:\\cpp programing\\emp.txt", ios ::in | ios::binary);
    File_handle file2;
    cout << "Reading file\n";
    emp1.read((char *)&file2, sizeof(file2));
    file2.get_data();
    emp1.close();
    return 0;
}
