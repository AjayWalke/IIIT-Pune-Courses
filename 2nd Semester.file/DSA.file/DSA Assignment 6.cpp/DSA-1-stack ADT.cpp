/*
In any language program mostly syntax error occurs 
due to unbalancing delimiter such as( ),{ },[ ]. 
Write C++ program using stack to check 
whether given expression is well-parenthesized or not.
Implement Stack ADT as an Array.
*/
#include <bits/stdc++.h>
using namespace std;
#define size 30

//-----stack using class------
class Stack
{
private:
  char str[size];
  int top;

public:
  Stack();
  bool isFull();
  bool isEmpty();
  int push(char);
  int pop();
  int peek();
};

Stack ::Stack()
{
  top = -1;
}

bool Stack ::isEmpty() // isempty operation
{
  if (top == -1)
    return 1;
  else
    return 0;
}

bool Stack ::isFull() // isfull operation
{
  if (top == (size - 1))
    return 1;
  else
    return 0;
}

int Stack ::push(char m) // push operation
{
  if (isFull())
  {
    return 0;
  }
  top++;
  str[top] = m;
  return m;
}

int Stack ::pop() // pop operation
{
  int temp;
  if (isFull())
  {
    return 0;
  }
  temp = str[top];
  top--;
  return temp;
}

int Stack ::peek() // peek operation
{
  if (isFull())
  {
    return 0;
  }
  return str[top];
}

//------checking parenthesis-----
bool wellParenthesis(string exp)
{
  Stack tr;
  char ho;
  for (int i = 0; i < exp.length(); i++)
  {

    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
    {
      tr.push(exp[i]);
    }
    if (tr.isEmpty())
    {
      return false;
    }
    if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
    {
      if (exp[i] == ')')
      {
        ho = tr.peek();
        tr.pop();
        if (ho == '{' || ho == '[')
          return false;
      }
      if (exp[i] == ']')
      {
        ho = tr.peek();
        tr.pop();
        if (ho == '(' || ho == '{')
          return false;
      }
      if (exp[i] == '}')
      {
        ho = tr.peek();
        tr.pop();
        if (ho == '(' || ho == '[')
          return false;
      }
    }
  }
  return (tr.isEmpty());
}

int main()
{
  int i;
  do
  {
    string s;
    cout << "\n----Welcome to Parenthesis checking----\n";
    cout << "Enter the expression :: \n";
    cin >> s;
    if (wellParenthesis(s))
    {
      cout << "Your entered expression is well parenthesized\n";
    }
    else
    {
      cout << "Your entered expression is well not parenthesized\n";
    }
    cout << "(1 -> continue)(0 -> exit)\n";
    cin >> i;
    if (i == 0)
      exit(0);
  } while (true);
  return 0;
}
