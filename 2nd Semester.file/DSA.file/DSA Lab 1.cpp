/*
Consider the students’ records containing students’ names and their examination score.
Design an algorithm and write a C++ program that does the following:
i) calculates the average of examination marks.
ii) finds out and displays the names of all the students whose examination scores are below
the average examination score.
iii) calculates the highest examination score.
iv) prints the names of all the students whose examination scores are the same as the
highest examination score.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m;  
  cout << "Enter the number of students" << endl;
  cin >> m;

  int score[m]; 
  char name[m][10];

  for (int i = 0; i < m; i++)
  {
    cout << "Enter name and score of " << i+1 << " student" << endl;
    cin >> name[i] >> score[i];  
  }
  
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    sum += score[i]; 
  }
  sum /= m;
  cout << "\nThe average = " << sum << endl;

  cout << "\nStudents below the averge marks ::" << endl;
  for (int i = 0; i < m; i++)
  {
    if (score[i] < sum)
    {
       cout << name[i] << endl;
    }
  }
   
  int highest_score;
  highest_score = sum;
  for (int i = 0; i < m; i++)
  {
    if (highest_score < score[i])
    {
        highest_score = score[i];
    }
  }
  cout << "\nHighest score = " << highest_score << endl;

  cout << "\nStudents getting highest score ::" << endl; 
  for (int i = 0; i < m; i++)
  {
    if (highest_score == score[i])
    {
       cout << name[i] << endl;  
    }
  }
  return 0;
}
