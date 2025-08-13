
/* -------------------------------------------------------------------------- */
/*         22               //! Nesting or member function                    */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class binary
{

    string s; // ~  s is a private member of the given class ;

public:
    void read();       // ^ void read(void);
    void check();      // ^ void read(void);
    void compliment(); // ^ void compliment(void)
    void display();    // ^ void display(void);
};

// * declaration outside the class by using scope re operator

void binary::read()
{ // void binary :: read(void) {
    cout << "Enter a binary Number : " << endl;
    cin >> s;
}

void binary ::check()
{ // void binary :: check(void) {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Input" << endl;
            exit(0);
        }
    }
}

void binary ::compliment()
{ // void binary :: compliment(void) {
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{ // void binary :: display(void) {
    cout << " display your  binary number : " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;

    b.read();
    b.check();
    b.display();
    b.compliment();
    b.display();

    return 0;
}