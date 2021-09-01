/*
Write a menu driven program to demonstrate 
basic stack operation using C++ Template. And
handle exception If needed.
*/
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

template <class T>
class Stack
{
public:
  Stack();
  void push(T k);
  T pop();
  T peek();
  bool isFull();
  bool isEmpty();

private:
  int top;
  T st[SIZE];
};

template <class T>
Stack<T>::Stack()
{
  top = -1;
}

template <class T>
void Stack<T>::push(T k)
{
  if (isFull())
  {
    cout << "Stack is full\n";
  }

  cout << "Inserted element " << k << endl;
  top = top + 1;
  st[top] = k;
}
template <class T>
bool Stack<T>::isEmpty()
{
  if (top == -1)
    return 1;
  else
    return 0;
}

template <class T>
bool Stack<T>::isFull()
{
  if (top == (SIZE - 1))
    return 1;
  else
    return 0;
}

template <class T>
T Stack<T>::pop()
{
  T popped_element = st[top];
  top--;
  return popped_element;
}

template <class T>
T Stack<T>::peek()
{
  T top_element = st[top];
  return top_element;
}

template <class T>
void func(T)
{
  Stack<T> a;
  do
  {

    int m;
    cout << "-----------------------\n";
    cout << "1 -> push\n2 -> pop\n"
         << "3 -> peek\n4 -> exit\n";
    cout << "----------------------\n";     
    cin >> m;
    if (m == 1)
    {
      cout << "Enter the entity : ";
      T b;
      cin >> b;
      a.push(b);
    }
    else if (m == 2)
    {
      a.pop();
      cout << "Popped successfully\n";
    }
    else if (m == 3)
    {
      cout << "Top Element : " << a.peek() << endl;
    }
    else if (m == 4)
    {
      exit(0);
    }
  } while (true);
}

int main()
{
  string s;
  cout << "Enter the  Datatype : ";
  cin >> s;
  func(s);
  return 0;
}
