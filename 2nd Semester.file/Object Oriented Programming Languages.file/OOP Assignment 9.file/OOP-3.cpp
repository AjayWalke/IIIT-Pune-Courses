/*
WAP to check if string is a palindrome or not. Take the input of type string from user. The string
can contain alphabets, spaces, special characters and numbers. Remove the special characters
and spaces before checking palindrome. For example,
“Madam! I’m Adam” will be converted to “madamimadam” -> palindrome
“Madam! 9” will be converted to “madam9” -> not a palindrome
“9. Madam! 9” will be converted to 9madam9 -> palindrome
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

bool palidrome(string s)
{
    // to remove spaces
    remove(s.begin(), s.end(), ' ');
    
    // to transform to lower case
    int j;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // removing special characters
    for (int i = 0; s[i] != '\0'; ++i)
    {
        while (!((s[i] >= 'a' && s[i] <= 'z') ||
                 (s[i] >= 'A' && s[i] <= 'Z') || 
                 (s[i] >= 0 && s[i] <= 9)))
        {
            for (j = i; s[j] != '\0'; ++j)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
        }
    }
    cout << "Modified string : " << s << endl;

    // checking palidrome
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            flag = 1;
        }
    }
    if (flag)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    do
    {
        int ans;
        cout << "---------------------------------\n";
        cout << "1 -> continue\n";
        cin >> ans;
        if (ans == 1)
        {
            // char str[50];
            // cout << "Enter string : ";
            // //cin.getline(str, 50);
            // cin >> str;
			string str;
            getline(cin, str);
            cout << str;
            if (palidrome(str))
            {
                cout << "String is palidrome\n";
            }
            else
            {
                cout << "String is not palidrome\n";
            }
        }
        else
        {
            exit(0);
        }
    } while (true);

    return 0;
}
