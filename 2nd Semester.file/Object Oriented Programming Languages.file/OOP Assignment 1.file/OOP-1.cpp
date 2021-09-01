/*
WAP to create a class “Student” and make a student data with following function.
getRollNo ()- takes one argument Roll no.
getName() – takes one argument Student Name.
getPhoneNo() –takes one argument Phone No(save in long)
getSection()-takes one argument Section
displayStudent()-Print all Student data of current student object.
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
   public:
   int roll;
   int section;
   long long int phone;
   string name;
    void getRollNo (){
        cout << "Enter rollno"<<endl;
        cin >> roll;
    }
    void getname(){
        cout << "Enter name"<<endl;
        cin >> name;
    }
    void getphone(){
        cout << "Enter phone"<<endl;
         cin >> phone;  
    }
    void getsection(){
        cout << "Enter section"<<endl;
        cin >> section;
    }
    void set(int r,string s,long long int p,int s1){
        roll = r;
        name = s;
        phone = p;
        section = s1;
    }
    void display(){
        cout <<"Name : " <<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Phone : "<<phone<<endl;
        cout<<"Section : "<<section<<endl;
    }
};
int main()
{
  Student S1;
  S1.getRollNo();
  S1.getname();
  S1.getphone();
  S1.getsection();
  S1.display();
  return 0;
}
