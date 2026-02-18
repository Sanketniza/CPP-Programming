#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Animal {

    public:
        int age ;
        int weight;


        Animal() {
            cout << "1.constructor called" << endl;
        }

        Animal(int age, int weight) {
            cout << "2.constructor called" << endl;
            this->age = age;
            this->weight = weight;
        }

        Animal(int age) {
            cout << "3.constructor called" << endl;
            this->age = age;
            this->weight = weight;
        }

        Animal(char a , int weight) {
            cout << "4.constructor called"<< endl;
        }

        // Animal(int a , int b) {
        //     cout << "5.constructor called"<< endl;
        // }
};

int main() {

    Animal c;

    // 1. Implicit Call: passing arguments directly
    Animal a(10, 50);
    Animal d(3);
    Animal e('A' , 3);
    // Animal f(333 ,333);

    // 2. Explicit Call: explicitly calling the constructor
    // Animal b = Animal(5, 25);

 return 0;
}