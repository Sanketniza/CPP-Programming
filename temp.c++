
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student {

    int a; // private member

    public:
        int b;

        void setData(int a , int b){
            this -> a = a;
            this -> b = b;
        };

        void getData() {
            cout << "The value of a is : " << a << endl;
            cout << "The value of b is : " << b << endl;
        }

        void outside(int a , int b);
};

void student :: outside(int a ,int b) {
    this -> a = a;
    this -> b = b;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    cout << "The value of a is : " << this -> a << endl;
    cout << "The value of b is : " << this -> b << endl;
    cout << "The address of a is : " << &a << endl;
    cout << "The address of b is : " << &b << endl;
    cout << "The address of a is : " << &this -> a << endl;
    cout << "The address of b is : " << &this -> b << endl;
}

int main() {

    student s;
    s.setData(10, 20);
    // s.outside(10, 20);
    s.getData();

    // s.setData(10, 20);
    // s.getData();
    // s.setData(10, 20);
    // s.getData();
    // s.outside(10, 20);
    // s.getData();
    // s.setData(10, 20);
    // s.getData();
 return 0;
}