#include <iostream>
using namespace std;

class student //^ structure is replaced by class with more feature's
{
       // ⁡⁢⁢⁣Initialization of class
       //  In classes the data is by default private hota hai
       //  if I write like this it can work --- > int a , b ,c ;
  
  private: //* Access Specifier: private members are only accessible from within the class.
  int a, b, c;

public: //* Access Specifier: public members are accessible from outside the class.
    int d, e;
    void setData(int a1, int b1, int c1); // declaration
    void getData()
    {
        cout << "Values of private members are :" << a << endl;
        cout << "Values of private members are :" << b << endl;
        cout << "Values of private members are :" << c << endl;
        cout << "Values of private members are e :" << d << endl;
        cout << "Values of private members are d :" << e << endl;
    }
};

//* Assigning the value , out side the class
void student :: setData(int a1, int b1, int c1) // ^ parameter 
{           // This tell to compiler ki setData is present in student class
    a = a1; // :: --> scope resolution
    b = b1;
    c = c1;
}

int main()
{
    student s1; //& object creation
    // here s1.a == 34 --> this will throw as 'a' is private;

    s1.d = 34;
    s1.e = 56;
    s1.setData(90, 85, 48);   // setting values to the member variables using function setData
    s1.getData();       // getting values from the member variables using function getData 
                              // print all the element

    // void getData();         // Not  working this ( also not show throw an error )
    return 0;
}




