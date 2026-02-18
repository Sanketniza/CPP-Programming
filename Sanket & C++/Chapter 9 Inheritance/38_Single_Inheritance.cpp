
/* -------------------------------------------------------------------------- */
/*            38     //!     single inheritance deep dive :                   */
/* -------------------------------------------------------------------------- */

//? 1) Single inheritance
    //* A derived class with only one base class
    //todo --> one parent and one child < base class = parent  , derived class = child >

/* 
#include <iostream>
using namespace std;

class base // todo--> base class
{
    int data1; // private by default and is not inherited........

public:
    int data2;
    void setData();
    int getData1(); // * If I take here void getData1() , I don't know why its show me error
    int getData2(); // * If I take here void getData2() , I don't know why its show me error
};

void base :: setData(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1()
{
    return data1;
}

int base ::getData2()
{
    return data2;
}

    class derived : public base   // todo --> derived class from base class
//^ class class_name : public /private /protected BaseClass_name
{
    int data3;

public:
    void process();
    void display();
};

void derived :: process()
{
    data3 = data2 * getData1(); // Here we can not be access data1 directly , because data1 is private 
    // Here I directly access data2 and getData1 from base class , it is possible only through Inheritance...
}

void derived::display()
{
    cout << "The value of data 1 is " << getData1() << endl;  //^ If we try to access data1 directly instead of getData1() it is not possible , because data1 is private member of the class.
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 2 is " << getData2() << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    //& base der; <--- Not be allowed , because data is going base to derived , not derived to base class......
    der.setData();
    der.getData1();
    der.getData2();
    der.process();
    // If you comment the above code then in der.display() garbage values will be seen ...
    der.display();

    return 0;
}
 */


#include <iostream>
using namespace std;

class base // todo--> base class (Parent class)
{
    int data1; // private by default and is not inherited........

public:
    int data2;
    void setData();
    int getData1();  // * int because we are returing data...
    int getData2();  // * int becuase we are returing data..
};

void base :: setData(void)
{
    data1 = 10;
    data2 = 20;
}

int base ::getData1() // to access the private member data1 outside the class
{
    return data1;
}

int base ::getData2() // here we use getter function
{
    return data2;
}

class derived : private base // todo --> derived class from base class 
{           //* when become a private derivation class 
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    setData();  //* only this one changes is necessary in private derivation
    data3 = data2 * getData1();
}

void derived:: display()
{
    cout << "The value of data 1 is " << getData1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    derived der;
    // der.setData();  // this is invalid because of the private member are not access the outside......
    der.process();
    der.display();

    return 0;
} 