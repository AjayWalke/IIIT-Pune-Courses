/*
WAP to take string as an input,
 Find out the Character in given string which 
come last as per Alphabetical order using class
Template. (The String should consist upper case 
characters as well as lower case characters)
For Example: InfoRmaTion : output ‘T’
ClaSS : output ‘S’
 The above program should be able to handle 
exceptions. For example, if the string contains
any character other than lower case character 
or upper case character (like: ‘!’, ‘#’, ‘&’, 1-9
digits etc.) then it must throw an exception
=>” EXCEPTION CAUGHT”
*/
#include <bits/stdc++.h>
using namespace std;

class Template
{
private:
  string str;

public:
  Template(string s)
  {
    str = s;
  }
  void function()
  {
    try
    {
      transform(str.begin(), str.end(), str.begin(), ::tolower);
      sort(str.begin(), str.end());
      char s = str.back();
      cout << "Last Character : " << s << "/" << (char)toupper(s)
           << endl;
      for (int i = 0; i < str.length(); i++)
      {
         if (str[i] == '!' || '#' || '&' || 1 ||2)
         {
           throw str[i];
         }
      }
           
    }
    catch (char e)
    {
      cout << "\nEXCEPTION CAUGHT\n";
    }
  }
};

int main()
{
  do
  {
    int m;
    cout << "\n------------------------\n";
    cout << "1 -> continue\n2 -> exit\n";
    cout << "------------------------\n";
    cin >> m;
    if (m == 1)
    {
      string s;
      cout << "Enter the string : ";
      cin >> s;
      Template t(s);
      t.function();
    }
    else
    {
      exit(0);
    }
  } while (true);
  return 0;
}
