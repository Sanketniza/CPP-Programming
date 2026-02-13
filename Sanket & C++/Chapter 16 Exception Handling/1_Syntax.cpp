#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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