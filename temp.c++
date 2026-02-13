#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class X {
    public:
        void display() {
            cout << "Hello ";
        }
    };
    
    class Y : public X {};
    class Z : public X {};
    
    class P : public Y, public Z {};
    
    int main() {
        P obj;
        obj.display(); // now works
    }
    