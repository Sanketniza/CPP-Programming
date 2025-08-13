#include <iostream>
using namespace std;

int main()
{

    int *a = new int(32);
    cout << *a << endl;

    // delete a;

    cout << *a << endl;

    int *p = new int(45);
    float *q = new float(9.8);
    cout << "THe value of p : " << *p <<  " And the value of q : " << *q << endl;

    delete p;
    delete q;

    cout << "THe value of p : " << p << " And the value of q : " << *q << endl;

    return 0;
}