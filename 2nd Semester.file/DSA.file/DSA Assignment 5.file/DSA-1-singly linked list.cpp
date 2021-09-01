#include <bits/stdc++.h>
using namespace std;

class industry;

struct node
{
    int id;
    char name[30];
    struct node *next;
};

class industry
{
public:
    node *head, *tail;

    industry()
    {
        head = NULL;
        tail = NULL;
    }
    void create_details();
    void add_details(int, char *);
    void count_details();
    void display_details();
    void insert_details(int, int, char *);
    void delete_details(int);
    node *reverse_details(node *);
    static void concatenate_lists(node *, node *);
};

//-----------creating a details----------------
void industry ::create_details()
{
    int id1;
    char name1[35];
    cout << "Enter the employee id and name ::\n";
    cin >> id1 >> name1;
    add_details(id1, name1);
}
void industry ::add_details(int a, char *b)
{
    node *temp = new node;
    temp->id = a;
    strcpy(temp->name, b);
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
}
//---------------------------------------------

//-----------counting no of nodes--------------
void industry ::count_details()
{
    int count = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        count += 1;
        ptr = ptr->next;
    }
    cout << "\nNumber of nodes : " << count << endl;
}
//---------------------------------------------

//------------displaying all details-----------
void industry ::display_details()
{
    cout << "\n~~~~~~~~~~~~Employee Details~~~~~~~~~~~\n";
    cout << "ID\tNAME\n";
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->id << "\t" << ptr->name;
        cout << endl;
        ptr = ptr->next;
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
//---------------------------------------------

//------------inserting the details after given value of node------
void industry ::insert_details(int pre_id, int eid, char ename[])
{
    if (head == NULL)
    {
        cout << "the given previous node cannot be NULL\n";
        return;
    }
    node *new_node = new node();
    new_node = head;
    node *ptr = new node();
    ptr->id = eid;
    strcpy(ptr->name, ename);
    while (new_node->id != pre_id)
    {
        new_node = new_node->next;
    }
    ptr->next = new_node->next;
    new_node->next = ptr;
    cout << "\nnode inserted\n";
}
//-----------------------------------------------------------------

//------------deleting the details after given value of node-------
void industry ::delete_details(int num)
{
    node *prev = head;
    while (prev->next != NULL && prev->next->id != num)
    {
        prev = prev->next;
    }
    if (prev->next == NULL)
    {
        cout << "the given previous node cannot be NULL\n";
        return;
    }
    node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}
//-----------------------------------------------------------------

//------------reversing the list using recursion------
node *temp1;
node *industry ::reverse_details(node *node)
{
    if (node == NULL)
        return NULL;
    if (node->next == NULL)
    {
        head = node;
        return node;
    }
    temp1 = reverse_details(node->next);
    temp1->next = node;
    node->next = NULL;
    return node;
}
//----------------------------------------------------

//------------concatenating the two lists-------------
void industry ::concatenate_lists(node *a, node *b)
{
    if (a != NULL && b != NULL)
    {
        if (a->next == NULL)
        {
            a->next = b;
        }
        else
        {
            concatenate_lists(a->next, b);
        }
    }
    else
    {
        cout << "Error\n";
    }
}
//----------------------------------------------------

int main()
{
    industry i, i1, i2;
    int choice;
    do
    {
        cout << "\n---------LINKED LIST OPERATIONS----------\n";
        cout << "1.Create a database of employee\n"
             << "2.Counting the employees\n"
             << "3.Inserting the details\n"
             << "4.deleting the details\n"
             << "5.Reversing the linked list\n"
             << "6.Concatenating two lists\n"
             << "7.exit\n";
        cout << "-----------------------------------------\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "---------------------------------\n";
            cout << "Creating a database of employee\n";
            cout << "---------------------------------\n";
            int ch;
            cout << "Enter the number of employee::\n";
            cin >> ch;
            for (int j = 0; j < ch; j++)
            {
                i.create_details();
            }
            i.display_details();
            break;
        case 2:
            cout << "---------------------------------\n";
            cout << "Counting the employees of database\n";
            cout << "---------------------------------\n";
            i.count_details();
            i.display_details();
            break;
        case 3:
            cout << "---------------------------------\n";
            cout << "Inserting the details in database\n";
            cout << "---------------------------------\n";
            int a, c;
            char b[35];
            cout << "Enter new employee id and name\n";
            cin >> a >> b;
            cout << "Enter the employee id after to";
            cout << " which new employee inserted\n";
            cin >> c;
            i.insert_details(c, a, b);
            i.display_details();
            break;
        case 4:
            cout << "---------------------------------\n";
            cout << "Deleting the details in database\n";
            cout << "---------------------------------\n";
            int a1;
            cout << "Enter the employee id to delete ::\n";
            cin >> a1;
            i.delete_details(a1);
            i.display_details();
            break;
        case 5:
            cout << "---------------------------------\n";
            cout << "Reversing the linked list\n";
            cout << "---------------------------------\n";
            i.reverse_details(i.head);
            i.display_details();
            break;
        case 6:
            cout << "---------------------------------\n";
            cout << "Concatenating two lists\n";
            cout << "---------------------------------\n";
            int ch2;
            cout << "Enter the number of employee of list 1::\n";
            cin >> ch2;
            for (int j = 0; j < ch2; j++)
            {
                i1.create_details();
            }
            int ch1;
            cout << "Enter the number of employee of list 2::\n";
            cin >> ch1;
            for (int j = 0; j < ch1; j++)
            {
                i2.create_details();
            }
            industry ::concatenate_lists(i1.head, i2.head);
            i1.display_details();
            break;
        case 7:
            exit(0);
            break;
        }
    } while (choice != 0);
    return 0;
}
