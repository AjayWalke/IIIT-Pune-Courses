/*
WAP to create an ABC “Account_Details” for a bank with following details: (Make member
variables public, protected or private as per your understanding)
 Client name (String)
 Account Number (5 digit integer)
 Current Balance (Float or Double)
 Member Function: Create New Account
 Member Function: Deposit money in account
 Member Function: Withdrawing money in account
 Member Function: Displaying account information
The bank decides to derive two customer classes derived from “Account_Details”: “Regular” and
“VIP”. The “Regular” class only provides the same function as “Account_Details” class. The “VIP”
account has all the base functions and details in ABC class with some extra functionality as if a
user writes a check larger than his or her balance (cannot be too large difference), the bank will
cover the extra amount, and charge a loan to user equal to extra amount along with an interest
rate. So the following variables and function are added:
 Upper limit to loan (float/double) – (Default upper-limit Rs. 500 but customer may
change limit while creating account)
 Simple Interest rate on loan (float/double) (Default interest rate 11.125% but customer
may change limit while creating account)

 Pending loan amount (float/double)
The loan amount will be settled in the next deposit customer makes. Change the base class
member functions accordingly. Test your program by creating objects/accounts in main function
by asking for user input.
*/

#include <bits/stdc++.h>
using namespace std;

class Account_Details
{
public:
    string client;
    int acc_no;
    float acc_balance;

    virtual void create_account()
    {
        cout << "\n------creating account-----\n";
        cout << "Enter Name   : ";
        cin >> client;
        cout << "Account No  : ";
        cin >> acc_no;
        cout << "Enter money : ";
        cin >> acc_balance;
        cout << "-----------------------------\n";
    }
    virtual void deposit_money()
    {
        float deposit;
        cout << "\n------Money Deposit-----\n";
        cout << "Enter the Amount to be Deposit : ";
        cin >> deposit;
        acc_balance += deposit;
        cout << "You deposited Successfully.\n";
        cout << "-------------------------\n";
    }
    virtual void withdraw_money()
    {
        float withdraw;
        cout << "\n------Money withdraw-----\n";
        cout << "Enter the Amount to be withdraw : ";
        cin >> withdraw;
        acc_balance -= withdraw;
        cout << "You withdrawed Successfully.\n";
        cout << "-------------------------\n";
    }
    virtual void display()
    {
        cout << "\n-----Account Info-------\n";
        cout << "Name    : " << client << "\n";
        cout << "Acc No  : " << acc_no << "\n";
        cout << "balance : " << acc_balance << "\n";
        cout << "--------------------------\n";
    }
};

class Regular : public Account_Details
{
public:
    Regular()
    {
        cout << "\n----Welcome Regular Client---\n";
    }
};

class VIP : public Account_Details
{
private:
    float upper_limit;
    float simple_interest;
    float pending_loan;

public:
    VIP()
    {
        upper_limit = 500;
        simple_interest = 11.125;
        cout << "\n---Welcome VIP Client---\n";
    }
    void deposit()
    {

        float deposit;
        cout << "\n------Money Deposit-----\n";
        cout << "Enter the Amount to be Deposit : ";
        cin >> deposit;
        cout << "Enter the Pending Amount : ";
        cin >> pending_loan;
        if (pending_loan == 0)
        {
            acc_balance += deposit;
            cout << "You deposited Successfully.\n";
            cout << "-------------------------\n";
        }
        if (pending_loan != 0)
        {
            cout << "Your Balance is going to credit\n";
            acc_balance += deposit;
            if (acc_balance >= pending_loan)
            {
                acc_balance -= pending_loan;
            }
            if (acc_balance < pending_loan)
            {
                pending_loan -= acc_balance;
                acc_balance = 0;
            }
            cout << "Pending loan : ";
            cout << pending_loan << endl;
            cout << "You deposited Successfully.\n";
            cout << "-------------------------\n";
        }
    }
    void withdraw_money()
    {
        float withdraw;
        float time_period;
        cout << "\n------Money withdraw-----\n";
        cout << "Enter the Amount to be withdraw : ";
        cin >> withdraw;
        if (withdraw <= acc_balance)
        {
            acc_balance -= withdraw;
            cout << "You withdrawed Successfully.\n";
            cout << "-------------------------\n";
        }
        else if (withdraw > acc_balance)
        {
            cout << "Enter the Simple Interest : ";
            cin >> simple_interest;
            cout << "Enter the Time Period : ";
            cin >> time_period;
pending_loan = ((withdraw - acc_balance)*time_period*simple_interest)/100;
            acc_balance = 0;
            cout << "Your Pending loan : ";
            cout << pending_loan << endl;               
        }
    }
};

int main()
{
    do
    {
        start:
        int ans;
        cout << "\n$$$$$$ Welcome To ABC Bank $$$$$$$\n";
        cout << "1 -> Regular\n2 -> VIP\n3-> exit\n";
        cin >> ans;

        if (ans == 1)
        {
            Regular r;
            r.create_account();
            do
            {
                int ans1;
                cout << "1 -> Deposit\n";
                cout << "2 -> Withdraw\n";
                cout << "3 -> Exit\n";
                cin >> ans1;
                if (ans1 == 1)
                {
                    r.deposit_money();
                    r.display();
                }
                if (ans1 == 2)
                {
                    r.withdraw_money();
                    r.display();
                }
                if (ans1 == 3)
                {
                    goto start;
                }
            } while (true);
        }

        if (ans == 2)
        {
            VIP v;
            v.create_account();
            do
            {
                int ans1;
                cout << "1 -> Deposit\n";
                cout << "2 -> Withdraw\n";
                cout << "3 -> Exit\n";
                cin >> ans1;
                if (ans1 == 1)
                {
                    v.deposit_money();
                    v.display();
                }
                if (ans1 == 2)
                {
                    v.withdraw_money();
                    v.display();
                }
                if (ans1 == 3)
                {
                    goto start;
                }
            } while (true);
        }
        if (ans == 3)
        {
            exit(0);
        }
    } while (true);
    return 0;
}
