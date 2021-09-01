/*
WAP to demonstrate Multiple Inheritance with following Property mention below
I. Make Class “BasicInfo”:
 Make Member Variable emp_name,empID,gender
 Make Member Function setBasicInfo(Use It for inserting value of member
variable )
 Make Member Function getBasicInfo(Use it for printing basic info)
II. Make Class “DeptInfo”
 Make Member Variable dep_name,depID
 Make Member Function setDeptInfo(Use It for inserting value of member
variable )
 Make Member Function getDeptInfo(Use it for printing basic info)
III. Make Class “Employee”
 Make a function getEmpInfo(Use it for printing whole employee Info)
*/
#include <bits/stdc++.h>
using namespace std;

class BasicInfo
{
private:
   char emp_name[20];
   int empID;
   char gender[10];

public:
   void setBasicInfo();
   void getBasicInfo();
};

void BasicInfo ::setBasicInfo()
{
   cout << "Enter the Employee Name : ";
   cin >> emp_name;
   cout << "Enter the Employee id : ";
   cin >> empID;
   cout << "Enter the gender : ";
   cin >> gender;
}
void BasicInfo ::getBasicInfo()
{
   cout << "\n--------Employees Basic Details--------\n";
   cout << "Employee Name : " << emp_name << endl;
   cout << "Employee ID :   " << empID << endl;
   cout << "Gender :        " << gender << endl;
   cout << "---------------------------------------------\n";
}

class DeptInfo
{
private:
   char dep_name[30];
   int depID;

public:
   void setDeptInfo();
   void getDeptInfo();
};

void DeptInfo ::setDeptInfo()
{
   cout << "Enter the Deparment Name : ";
   cin >> dep_name;
   cout << "Enter the Deparment id : ";
   cin >> depID;
}
void DeptInfo ::getDeptInfo()
{
   cout << "\n--------Employees Deparment Details--------\n";
   cout << "Deparment Name : " << dep_name << endl;
   cout << "Deparment ID :   " << depID << endl;
   cout << "---------------------------------------------\n";
}

// BasicInfo & DeptInfo -----inherited----> Employee
class Employee : public BasicInfo, public DeptInfo
{
public:
   void getEmployeeInfo()
   {
      cout << "\n----------Filling Employee Details----------\n";
      setBasicInfo();
      setDeptInfo();
      getBasicInfo();
      getDeptInfo();
   }
};

int main()
{
   Employee e;
   e.getEmployeeInfo();
   return 0;
}
