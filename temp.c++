#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Parent {

    int data;

    public:

        void setData(int data) {
            this->data = data;
            cout << "The value of data is : " << data << endl;
        }

        void house() {
            cout << "I own a house\n";
        }
    };
    
    class Child : public Parent { // Child inherits Parent
    public:
        void car() {
            cout << "I own a car\n";
        }

        void display() {
            cout << "The value of data is : " << data << endl;
        }
    };
    
    int main() {
        Child c;
        c.house(); // inherited from Parent
        c.car();   // child’s own function

        c.setData(23);
        c.display();
    }
    