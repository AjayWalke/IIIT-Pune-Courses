/*
Write a menu-driven program to perform various string operations such as copy, length,
reversing, palindrome, concatenation and, to find occurrence of a sub-string using and without
using library functions.
*/

#include <iostream>
using namespace std;

// case 1 string_length
int string_length(char a[])
{
  int count = 0;
  int i = 0;
  while (a[i] != '\0')
  {
    count++;
    i++;
  }
  return count;
}

//case 2 string_copy
char *string_copy(char a[], char b[])
{
  int i = 0;
  while (b[i] != '\0')
  {
    a[i] = b[i];
    i = i + 1;
  }
  a[i] = '\0';
  return a;
}

//case 3 string_concat
char *string_concat(char a[], char b[])
{
  int i = 0;
  while (a[i] != '\0')
  {
    i++;
  }
  int j = 0;
  while (b[j] != '\0')
  {
    a[i] = b[j];
    i++;
    j++;
  }
  a[i] = '\0';
  return a;
}

// case 4 string_reverse
char *string_reverse(char a[])
{
  int j = string_length(a);
  int i = 0;
  for (i = 0; i < j / 2; i++)
  {
    char temp = a[i];
    a[i] = a[j - i - 1];
    a[j - i - 1] = temp;
  }
  return a;
}

//case 5 string_palidrome
void string_palidrome(char a[])
{
  int length = string_length(a);
  int flag = 0;
  for (int i = 0; i < length; i++)
  {
    if (a[i] != a[length - i - 1])
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
  {
    cout << "not a palidrome\n";
  }
  else
  {
    cout << "a palidrome\n";
  }
}

// case 6 string_compare
int string_compare(char a[], char b[])
{
  int i = 0;
  while (a[i] == '\0' || b[i] == '\0')
  {
    if (a[i] == b[i])
    {
      i++;
    }
    else
    {
      int diff;
      diff = a[i] - b[i];
      return diff;
    }
  }
}

// case 7 string_substring
int string_substring(char a[], char b[])
{

  /*
  -----------using a library function----------
  //int i = a.length();
  //int j = b.length();
  */

  //----------without library function---------
  int i = string_length(a);
  int j = string_length(b);
  int count = 0;
  if (j > i)
  {
    return 0;
  }
  else
  {
    int i2;
    for (int i1 = 0; i1 < i - j; i1++)
    {
      for (i2 = 0; i2 < j - 1; i2++)
      {
        if (a[i1 + i2] != b[i2])
        {
          break;
        }
      }
      if (i2 = j)
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{
  char s1[100];
  char s2[100];
  cout << "Enter the strings :: \n"; 
  cin >> s1 >> s2;
start:
  int ans;
  cout << "Menu for string opertions\n1 -> length\n"
       << "2 -> copy\n3 -> concatenate\n4 -> reverse"
       << "\n5 -> palidrome\n6 -> compare\n7 -> substring\n";
  cin >> ans;
  switch (ans)
  {
  case 1:
    //------finding length of strings---------------
    cout << "\n1. String Length \n"
         << s1 << " is " << string_length(s1) << endl;
    cout << s2 << " is " << string_length(s2) << endl;
    break;
  case 2:
    //------copying strings---------------
    cout << "\n2. String Copy \n";
    string_copy(s1, s2); 
    cout <<"Now ::\nstring 1 is "<<s1<<endl;
    cout <<"string 2 is "<<s2<<endl;
	break;
  case 3:
    //--------concatenating strings-------
    cout << "\n3. String Concatenation \n"
         << string_concat(s1, s2) << endl;
    break;
  case 4:
    //---------reversing strings----------
    cout << "\n4.String Reverse \n";
    cout <<"Reversing the string 1 is " << string_reverse(s1) << "'" << endl;
    cout <<"Reversing the string 2 is " << string_reverse(s2) << "'" << endl;
    break;
  case 5:
    //----------checking palidrome---------
    cout << "\n5. String Palindrome\n";
    cout << s1 << " is ";
    string_palidrome(s1);
    cout << s2 << " is ";
    string_palidrome(s2);
    break;
  case 6:
    //----------comparing strings-----------
    int res3;
    res3 = string_compare(s1, s2);
    cout << "\n6. String Compare\n";
    if (res3 < 0){
      cout<< s1 << " string is less than string " << s2 << endl;
    }
    else{
	       if(res3 > 0){
         cout << s1 << " string is equal to string " << s2 << endl;
        }
         if(res3==0){    	
         cout << s1 << " string is greater than string " << s2 << endl;
        }
    }
    break;
  case 7:
    //----------checking the substring----------
    cout << "\n6. String Substring\n";
    if (string_substring(s1, s2) == 0)
    {
      cout << "Not substring\n";
    }
    else
    {
      cout << "Given string is substring\n";
    }
    break;
  }

  int i;
  cout << "\nPress 1 for continue\nexit -> any key\n";
  cin >> i;
  if (i == 1)
  {
    goto start;
  }
  else
  {
    exit(0);
  }
  return 0;
}
