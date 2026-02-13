#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//? https://www.geeksforgeeks.org/cpp/c-plus-plus/
//? https://www.geeksforgeeks.org/cpp/exception-handling-c/

int main() {

    int x = 7;
    try{
        if(x % 2 != 0){
            throw -1;
        }
        
    }catch(int error) {
        cout << "error is " << error << endl;
    }

    //For example, the .at() method throws an out_of_range exception when the element with given index does not exists.
    vector<int> v = {1,2,3,4,5};

    try{
        v.at(10);
    }
    catch(const out_of_range e){
        cout << "error is " << e.what() << endl;
    }

 return 0;
}

/* 
    try:-
        = 
    
    throw:-
        = When the standard exceptions cannot satisfy our requirement, we can create a custom exception class. It is recommended to inherit standard exception in this class to provide seamless integrity with library components though, it is not compulsory.

        = Throwing exception means returning some kind of value that represent the exception from the try block. The matching catch block is found using the type of the thrown value. The throw keyword is used to throw the exception.

        = There are three types of values that can be thrown as an exception:
            - Built-in Types
            - Standard Exceptions
            - Custom Exceptions

    catch:-
        = catch block is used to catch the exceptions thrown in the try block. The catch block takes one argument, which should be of the same type as the exception.    
*/