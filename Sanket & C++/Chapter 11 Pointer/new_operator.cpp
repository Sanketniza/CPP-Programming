#include<iostream>
using namespace std;
 
int main() { 

    int *p;
    p = new int;

    cout << "Enter the value of P : " ;
    cin >> *p;

    cout << "THe value of P : " <<  *p << endl;

    return 0;
}