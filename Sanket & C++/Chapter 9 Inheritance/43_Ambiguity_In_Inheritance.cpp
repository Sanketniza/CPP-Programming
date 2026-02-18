 
/* -------------------------------------------------------------------------- */
/*           43 //!      Ambiguity Resolution In Inheritance                  */
/* -------------------------------------------------------------------------- */

//^  Ambiguity = compiler confused between which function I call or print called Daimand Problem.

// Diamand Problem = when a class is derived from two classes and both classes have the same function name then it is called Diamand Problem.
// Solution = use scope resolution operator :: to call the function of the class.


#include <iostream>
using namespace std;

//* ⁡⁢⁢⁣Ambiguity Resolution example 1⁡

class Base1
{
public:
    void greet() {
        cout << "Hello I am Base1 " << endl;
    }
};

class Base2
{
public:
    void greet() {
        cout << "Hello I am Base2 " << endl;
    }
};

class Derived : public Base1, public Base2 
{
    // int a ;
      public:
        void greet(){
            Base1 :: greet(); //* this remove the ambiguity of compiler . Here compiler understand the which greet() function i have to call.If you dont write like this ambiguity can seen...........
            Base2 :: greet();
        }
};


//todo:- Ambiguity Resolution example 2

 /*      class B{
         public:
           void say() {
            cout << "Hello sanket " << endl;
           }
      };

      class D : public B{
          int a;
          //* D  new say() function method will be overridden base class B say() function (method)
          //* so in Class D say() function is called.. HEre..
            public:
               void say() {
                cout << "this can override the first given function which is present in Class B" << endl;
               }
      }; */


int main()
{

    //todo:- Ambiguity Resolution example 1

      Base1 a;
      Base2 b;

    //   a.greet();
    //   b.greet();

     Derived c; 
     c.greet();
      //* Here compiler is confused to print the the greet() function .  because in both classes greet() function is present . and confusing is in which class the greet() function i will class for print.

      //todo:- Ambiguity Resolution example 2

   /*   B d;
     d.say();

     D e;
     e.say(); */

    return 0;
}