  /* -------------------------------------------------------------------------- */
  /*                    //!    copy constructor                                 */
  /* -------------------------------------------------------------------------- */

  // * what is copy constructor
   // --> Copy constructor make copy of another object
   // --> 

#include<iostream>
using namespace std;
  
class Number{

    int a = 48;

    public:
    Number(){}           //^ default constructor
    Number(int num){   //^ another constructor
     a = num;
    }

    // todo--> when no copy constructor is found , compiler supplies its own copy constructor
    // todo--> It's mean --> when i comment the give copy constructor its work
    
    Number(Number &obj) {  // copy constructor.........
        cout << "copy constructor called !!!!!!" << endl;
        a = obj.a;
    }
   
   void display(){
       cout << "enter number for this object is = " << a << endl;
    }  
}; 

int main() { 

    Number x , y , z(45);   //?: object 
    //   Number  z(4);  

    x.display();
    y.display();
    z.display();

    Number z1(z);           //?: copy constructor called
    z1.display();

    Number z3 = z;         //?: copy constructor invoked (called)
    z3.display();

    return 0;
}