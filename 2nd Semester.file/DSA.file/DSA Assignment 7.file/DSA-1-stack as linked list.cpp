/*
Write a program to implement stack as an 
abstract data type using linked list and use 
this ADT for conversion of infix expression to
postfix, prefix and evaluation of postfix/prefix expression.
*/
#include <bits/stdc++.h>
using namespace std;

//------------Stack Using Linked List----------------
class Node
{
public:
  char str;
  Node *next;
};

class Stack
{
public:
  Node *top;

  Stack()
  {
    top = NULL;
  }
  bool isempty();
  void push(char);
  char pop();
  char Top();
};

bool Stack ::isempty()
{
  if (top == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void Stack ::push(char d)
{
  Node *temp;
  temp = new Node();
  temp->str = d;
  if (top == NULL)
  {
    temp->next = NULL;
  }
  else
  {
    temp->next = top;
  }
  top = temp;
}

char Stack ::pop()
{
  int x = -1;
  if (top == NULL)
    cout << "UNDERFLOW\n";
  else
  {
    Node *temp = top;
    x = temp->str;
    top = top->next;
    delete (temp);
  }
  return x;
}

char Stack ::Top()
{
  return top->str;
}
//-------------------------------------------

bool isoperator(char c) // checking operators
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int priority(char s) // priority of operators
{
  if (s == '+' || s == '-')
    return 1;
  if (s == '*' || s == '/' || s == '%')
    return 2;
  if (s == '^')
    return 3;
  return 0;
}

//-----------------------------------------------------------------

string infix_to_postfix(string infix) // Conversion infix to postfix
{
  Stack stack;
  string postfix;
  for (int i = 0; i < infix.length(); i++)
  {
    if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
    {
      postfix += infix[i];
    }
    else if (infix[i] == '(')
    {
      stack.push(infix[i]);
    }
    else if (infix[i] == ')')
    {
      while ((stack.Top() != '(') && (!stack.isempty()))
      {
        char temp = stack.Top();
        postfix += temp;
        stack.pop();
      }
      if (stack.Top() == '(')
      {
        stack.pop();
      }
    }
    else if (isoperator(infix[i]))
    {
      if (stack.isempty())
      {
        stack.push(infix[i]);
      }
      else
      {
        if (priority(infix[i]) > priority(stack.Top()))
        {
          stack.push(infix[i]);
        }
        else if ((priority(infix[i]) == priority(stack.Top())) && (infix[i] == '^'))
        {
          stack.push(infix[i]);
        }
        else
        {
          while ((!stack.isempty()) && (priority(infix[i]) <= priority(stack.Top())))
          {
            postfix += stack.Top();
            stack.pop();
          }
          stack.push(infix[i]);
        }
      }
    }
  }
  while (!stack.isempty())
  {
    postfix += stack.Top();
    stack.pop();
  }
  return postfix;
}

//------------------------------------------------------------------

string infix_to_prefix(string infix) // Conversion Infix to prefix
{
  Stack stack1;
  string prefix;

  reverse(infix.begin(), infix.end());
  for (int i = 0; i < infix.length(); i++)
  {
    if (infix[i] == ')')
    {
      infix[i] = '(';
    }
    else if (infix[i] == '(')
    {
      infix[i] = ')';
    }
  }

  for (int i = 0; i < infix.length(); i++)
  {
    if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
    {
      prefix += infix[i];
    }
    else if (infix[i] == '(')
    {
      stack1.push(infix[i]);
    }
    else if (infix[i] == ')')
    {
      while ((stack1.Top() != '(') && (!stack1.isempty()))
      {
        prefix += stack1.Top();
        stack1.pop();
      }
      if (stack1.Top() == '(')
      {
        stack1.pop();
      }
    }
    else if (isoperator(infix[i]))
    {
      if (stack1.isempty())
      {
        stack1.push(infix[i]);
      }
      else
      {
        if (priority(infix[i]) > priority(stack1.Top()))
        {
          stack1.push(infix[i]);
        }
        else if ((priority(infix[i]) == priority(stack1.Top())) && (infix[i] == '^'))
        {
          while ((priority(infix[i]) == priority(stack1.Top())) && (infix[i] == '^'))
          {
            prefix += stack1.Top();
            stack1.pop();
          }
          stack1.push(infix[i]);
        }
        else if (priority(infix[i]) == priority(stack1.Top()))
        {
          stack1.push(infix[i]);
        }
        else
        {
          while ((!stack1.isempty()) && (priority(infix[i]) < priority(stack1.Top())))
          {
            prefix += stack1.Top();
            stack1.pop();
          }
          stack1.push(infix[i]);
        }
      }
    }
  }
  while (!stack1.isempty())
  {
    prefix += stack1.Top();
    stack1.pop();
  }
  reverse(prefix.begin(), prefix.end());
  return prefix;
}
//---------------------------------------------------------------------

// evaluating expressions

int evaluate_postfix(string mmm)
{
  stack<int> Stack_1; // class template of stack
  for (int i = 0; i < mmm.length(); i++)
  {
    if (mmm[i] >= '0' && mmm[i] <= '9')
    {
      Stack_1.push(mmm[i] - '0');
    }
    else
    {
      int x = Stack_1.top();
      Stack_1.pop();

      int y = Stack_1.top();
      Stack_1.pop();
      if (mmm[i] == '+')
      {
        Stack_1.push(y + x);
      }
      else if (mmm[i] == '-')
      {
        Stack_1.push(y - x);
      }
      else if (mmm[i] == '*')
      {
        Stack_1.push(y * x);
      }
      else if (mmm[i] == '/')
      {
        Stack_1.push(y / x);
      }
    }
  }
  return Stack_1.top();
}

int evaluate_prefix(string ttt)
{
  stack<int> Stack_2;
  int size = ttt.size() - 1;

  for (int i = size; i >= 0; i--)
  {

    if (isdigit(ttt[i]))
      Stack_2.push(ttt[i] - '0');
    else
    {
      int o1 = Stack_2.top();
      Stack_2.pop();
      int o2 = Stack_2.top();
      Stack_2.pop();
      if (ttt[i] == '+')
        Stack_2.push(o1 + o2);
      else if (ttt[i] == '-')
        Stack_2.push(o1 - o2);
      else if (ttt[i] == '*')
        Stack_2.push(o1 * o2);
      else if (ttt[i] == '/')
        Stack_2.push(o1 / o2);
      else
      {
        cout << "Invalid Expression";
        return -1;
      }
    }
  }
  return Stack_2.top();
}
//-------------------------------------------------

int main()
{
  // Menu-driven Program
  do
  {
    int ans;
    cout << "\n------------Conversion------------\n";
    cout << "1 -> Infix To Postfix\n";
    cout << "2 -> Infix To Prefix\n";
    cout << "3 -> Evaluation of Postfix\n";
    cout << "4 -> Evaluation of Prefix\n";
    cout << "5 -> Exit\n";
    cout << "------------------------------------\n";
    cin >> ans;
    string infix_1, infix_2;
    string postfix, prefix;
    switch (ans)
    {
    case 1:
      cout << "~~~~~~~~~~INFIX TO POSTFIX~~~~~~~~~\n";
      cout << "Enter the Infix expression    : ";
      cin >> infix_1;
      cout << "Correspond Postfix expression : ";
      cout << infix_to_postfix(infix_1) << "\n";
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      break;

    case 2:
      cout << "~~~~~~~~~~INFIX TO PREFIX~~~~~~~~~\n";
      cout << "Enter the Infix expression   : ";
      cin >> infix_2;
      cout << "Correspond Prefix expression : ";
      cout << infix_to_prefix(infix_2) << "\n";
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      break;

    case 3:
      cout << "~~~~~~~~~~Evaluation of Postfix~~~~~~~~~\n";
      cout << "Enter the Expression     : ";
      cin >> postfix;
      cout << "Evaluation of expression : ";
      cout << evaluate_postfix(postfix) << "\n";
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      break;

    case 4:
      cout << "~~~~~~~~~~Evaluation of Prefix~~~~~~~~~\n";
      cout << "Enter the Expression     : ";
      cin >> prefix;
      cout << "Evaluation of expression : ";
      cout << evaluate_prefix(prefix) << "\n";
      cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
      break;

    case 5:
      exit(0);
    }
  } while (true);

  return 0;
}
/*
(P+Q)*(A+B)
(a/b+c)-(d+e*f)
(A-(B/C+(D%E*F)/G)*H)
234*+5+
-*63-41
*/
