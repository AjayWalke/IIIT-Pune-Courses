/*
WAP to open a file in write mode, write a message
 "This file is created by "Your name'"� and
close the file. Then open the file in read mode 
and print content of same file. Handle exception
also if needed.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  // creating file in write mode
  ofstream mode1;
  mode1.open("D:\\cpp programing\\ajay.txt", ios::out);
  mode1 << "This file is created by 'Ajay'";
  mode1.close();

  //creating file in read mode
  try
  {
    ifstream mode2;
    mode2.open("D:\\cpp programing\\ajay.txt", ios::in);
    string s;
    mode2 >> s;
    getline(mode2, s);
    cout << s;
    mode2.close();
    if (s.empty())
    {
      throw 's';
    }
  }
  catch (char c)
  {
    cout << "\nException Caught : File is empty\n";
  }

  return 0;
}
