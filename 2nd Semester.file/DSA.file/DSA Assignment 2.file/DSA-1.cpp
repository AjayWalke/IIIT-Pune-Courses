/*
Write a C++ program and algorithm that estimates and prints monthly wages for a worker.
User will input the gross payment amount. The total payment is estimated and finalized
subsequent to the following deductions:
Income Tax: 10%
State Tax: 3%
Social Security Tax: 2%
Medicare Tax: 2.78%
Pension Plan: 6%
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t1,t;  
  t = 1;
  cout << "Number of workers ::" << endl;
  cin >> t1;
  while (t1--)
  {
    float gross_payment;
    //Income_Tax = 0.10;
    //State_Tax = 0.03;
    //Social_Security_Tax = 0.02;
    //Medicare_Tax = 0.0278;
    //Pension_Plan = 0.06;
    float payment = 0;
    cout << "\nEnter the gross payment of worker "<< t <<" ::" << endl;
    cin >> gross_payment;
    payment =gross_payment-(gross_payment*0.10)-(gross_payment*0.03)-(gross_payment*0.02)-(gross_payment*0.0278)-(gross_payment*0.06);
    cout << "Net payment for worker "<< t <<" == Rs " << payment << endl;
    t++;
  }
  
  return 0;
}
