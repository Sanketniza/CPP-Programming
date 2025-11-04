#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class binary {
    string s;

    public:
        void read();
        void check();
        void display();
        void compliment();
};

void binary :: read() {
    // string s;
    cin >> s;
}

void binary :: check() {

    cout << "checking binary " << endl;
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1') {
            cout << "invalid string" << endl;
            exit(0);
        }
    }
}

void binary :: compliment() {

    cout << "compliment " << endl;
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

void binary :: display() {
    cout << "display result" << endl;

    for(int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}

int main() {

    binary b;
    b.read();
    b.check();
    b.display();
    b.compliment();
    b.display();
 return 0;
}