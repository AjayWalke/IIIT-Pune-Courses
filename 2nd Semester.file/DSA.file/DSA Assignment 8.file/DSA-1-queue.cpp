/*
Implementation of circular queue using 
array and perform following operations on it.
i) Add a record ii) Delete a record 
iii) Checking Empty iv) Checking Underflow 
v) Checking overflow
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 50

class Queue
{
private:
  int item;
  int front;
  int rear;
  int arr[MAX];

public:
  Queue()
  {
    front = -1;
    rear = -1;
  }
  bool isEmpty();
  bool isFull();
  int Enqueue(int);
  int Dequeue();
  void display();
};

// isEmpty operation
bool Queue ::isEmpty()
{
  if (front < MAX)
  {
    return true;
  }
  else
  {
    return false;
  }
}

// isFull operation
bool Queue ::isFull()
{
  if (rear == MAX)
  {
    return true;
  }
  else
  {
    return false;
  }
}

// inserting(enqueue) operation
int Queue ::Enqueue(int val)
{
  if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
  {
    cout << "Error : Overflow\n"; // checking overflow
    return 0;
  }

  if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
  }
  else
  {
    if (rear == MAX - 1 && front != 0)
    {
      rear = 0;
    }
    else
    {
      rear += 1;
    }
  }
  arr[rear] = val;
  cout << "Element added sucessfully\n";
  return val;
}

// deleting(dequeue) operation
int Queue ::Dequeue()
{
  if (front == -1 || front > rear)
  {
    cout << "Error : Underflow\n"; // checking underflow
    return 0;
  }

  int dequeue_item = arr[front];
  if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    if (front == MAX - 1)
    {
      front = 0;
    }
    else
    {
      front += 1;
    }
  }
  cout << "Deleted Element : " << dequeue_item;
  cout << "\nElement deleted sucessfully\n";
  return dequeue_item;
}

// displaying queue
void Queue ::display()
{
  if (front == -1)
  {
    cout << "Queue is Empty\n";
  }
  else
  {
    cout << "\n*********Queue*********\n";
    for (int i = front; i <= rear; i++)
    {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}

int main()
{
  Queue queue;
  do
  {
    int ans;
    cout << "\n--------Circular queue----------\n";
    cout << "1 -> Add a record\n2 -> Delete a record\n";
    cout << "3 -> Checking empty\n4 -> Exit\n";
    cout << "---------------------------------\n";
    cin >> ans;
    if (ans == 1)
    {
      int size;
      cout << "---------Enqueue Element---------\n"
           << "Enter the number of elements : ";
      cin >> size;
      int a[size];
      for (int i = 0; i < size; i++)
      {
        cout << "Enter the element " << i << ": ";
        cin >> a[i];
        queue.Enqueue(a[i]);
      }
      queue.display();
      cout << "---------------------------------\n";
    }
    else if (ans == 2)
    {
      cout << "---------Dequeue Element---------\n";
      queue.Dequeue();
      queue.display();
      cout << "---------------------------------\n";
    }
    else if (ans == 3)
    {
      cout << "---------Checking Empty---------\n";
      if (queue.isEmpty())
      {
        cout << "Queue is Empty\n";
      }
      else
      {
        cout << "Queue is not Empty\n";
      }
      cout << "---------------------------------\n";
    }
    else
    {
      exit(0);
    }
  } while (true);
  return 0;
}
