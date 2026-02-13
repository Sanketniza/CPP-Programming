/* 
    ## Catch by Value or Reference

        * Just like function arguments, the catch block can catch exceptions either by value or by reference. Both of the methods have their own advantage.

        1. Catch by Value: Catching exceptions by value creates a new copy of the thrown object in the catch block. Generally, the exceptions objects are not very large so there is not much overhead of creating copies.

        2. Catch by Reference: Catch by reference method just pass the reference to the exception thrown instead of creating a copy. Although it reduces the copy overhead, it is not the primary advantage of this method. The main advantage of this method is in catching polymorphic exception types. For example,


*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    // catch by value..
    try {
        throw runtime_error("This is runtime exception");
    }
    
    // Catching by value
    catch ( runtime_error e) {
        cout << "Caught: " << e.what();
    }

cout << endl;

    // catch by reference
    try {
        throw runtime_error("This is runtime exception");
    }

    catch(runtime_error &e) { // exception &e
        cout << "Caught: " << e.what();
    }

    return 0;
}


