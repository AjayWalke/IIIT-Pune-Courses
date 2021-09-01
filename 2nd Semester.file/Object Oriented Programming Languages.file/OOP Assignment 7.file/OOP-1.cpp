/*
WAP to create a class “Amazon_Music” with following details: (Make member variables public
or private as per your understanding)
 Singer name(String)
 Album name (String)
 Number of songs (Integer)
 Playtime (Integer) (in min)
 Constructor(s)
 Destructor
 Member function - “display” to print all Amazon_Music data
Create a class “Music_Info” derived with “Amazon_Music”, with an added variable
 Genre (String)
 Member function - “display” to print all Music Info data.
Now test your above classes with doing following (If the base class requires that any function be
virtual, modify the base-class declaration to make it so.):
 Create an object for both base and derived class
 Print the display by calling “Display” function using objects of base and derived class
 Print the display by calling “Display” function using a base pointer to objects of base and
derived class
 Delete the “Music_Info” class object using a pointer to class “Amazon_Music”
*/

#include <bits/stdc++.h>
using namespace std;

class Amazon_Music
{
private:
    string singer_name;
    string album_name;
    int songs;
    int playtime;

public:
    Amazon_Music()
    {
        songs = 0;
        playtime = 0;
    }
    Amazon_Music(string singer_name, string album_name,
             int songs, int playtime)
    {
        this->singer_name = singer_name;
        this->album_name = album_name;
        this->songs = songs;
        this->playtime = playtime;
    }
    ~Amazon_Music()
    {
        cout << "\n-----Called Amazon Music Destructor----\n";
    }
    void display()
    {
        cout << "\n----All Amazon Music Info data----\n";
        cout << "Singer's name : " << singer_name << endl;
        cout << "Album's name  : " << album_name << endl;
        cout << "No. of Songs  : " << songs << endl;
        cout << "Playtime      : " << playtime << endl;
        cout << "------------------------------------\n";
    }
};

class Music_Info : public Amazon_Music
{
private:
    string genre;

public:
    Music_Info(string genre)
    {
        this->genre = genre;
    }
    ~Music_Info()
    {
        cout << "\n-----Called Music Destructor----\n";
    }
    void display()
    {
        cout << "\n----All Music Info data----\n";
        cout << "Music Genre : " << genre << endl;
        cout << "-----------------------------\n";
    }
};

int main()
{
    string i, j, p;
    int k, l;
    cout << "-------Welcome To Amazon Music--------\n";
    cout << "Enter the Singer name : ";
    cin >> i;
    cout << "album : ";
    cin >> j;
    cout << "No of songs : ";
    cin >> k;
    cout << "Playtime : ";
    cin >> l;
    cout << "Enter the Genre of album\n";
    cin >> p;

    Amazon_Music a(i, j, k, l);
    Music_Info m(p);

    //display by calling Display function using objects of
    //base and derived class
    cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout << "\ncalling display using object of class\n";
    a.display();
    m.display();
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";

    //calling Display� function using a base pointer
    Amazon_Music *a1;
    a1 = &a;
    Music_Info *m1;
    m1 = &m;
    cout << "\n#############################################\n";
    cout << "\ncalling Display function using a base pointer\n";
    a1->display();
    ((Music_Info *)m1)->display();
    cout << "#############################################\n";

    //Delete the Music_Info class object using a pointer to
    //class Amazon_Music
    Amazon_Music *a2 = new Music_Info(m);
    delete a2;
    return 0;
}
