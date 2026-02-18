   
   /* -------------------------------------------------------------------------- */
   /*            48  //!     Example of constructor Derived class                */
   /* -------------------------------------------------------------------------- */
#include <iostream>
using namespace std;

/*
   todo: Case: 1

           class B: public A {
             ? Order of execution of constructor --> First A() then B()
           }

    todo: Case: 2

           class A : public B , public C {
            ? Order of execution of constructor --> First B() then C() and then  A()
           }

    todo: Case: 3

          class A : public B , virtual public C {
            ? Order of execution of constructor --> first C() and then B() and then A()
          }
 */

class Base1
{
    int data1;

public:
    Base1(int i) // todo : Constructor of Base1 class (constructor initialization)
    //^ Parametrized constructor......
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i) // todo : Constructor of Base2 class (constructor initialization)
    //^ Parametrized constructor......
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }

    void printDataBase2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2 {     // todo: Base1 () constructor called than Base2 () constructor called " << data2 << endl;
//* class Derived : public Base2, public Base1  // Base2 () constructor called than Base1 () constructor called " << data2 << endl;

   int Derived1 , Derived2;
     public:
     //^ Initialize List only useful in 𝗖𝗼𝗻𝘀𝘁𝗿𝘂𝗰𝘁𝗼𝗿 
      Derived(int a , int b , int c , int d ) : Base1(a) , Base2(b)  // todo : derived class constructor 
                                            //^  it is called initialization list , see in 49 video
      { 
           Derived1 = c;
           Derived2 = d;
           cout << " Derived class constructor called" << endl;
      }

      void printDataDerived(void) 
      {
        cout << "THe value of Derived1 is : "<< Derived1 << endl;
        cout << "THe value of Derived2 is : "<< Derived2 << endl;
      }
};

int main()
{
    Derived ob(1, 2, 3, 4);
    ob.printDataBase1();
    ob.printDataBase2();
    ob.printDataDerived(); 
    return 0;
}