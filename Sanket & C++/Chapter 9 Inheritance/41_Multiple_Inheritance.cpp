
/* -------------------------------------------------------------------------- */
/*       41   //!                Multiple Inheritance                         */
/* -------------------------------------------------------------------------- */

//? 2) multiple Inheritance
//* A derived class with more than one base class
// todo --> multiple parent and one child .
//^ parent = base class , child = derived class

#include <iostream>
using namespace std;

/*
    Syntax for inheritance in multiple inheritance

    todo:  DerivedC : visibility-mode base1 , visibility-mode base2
    todo:  {
    todo:   Class body of class "DerivedC"
    todo:  }
 */

class Base1 {
    protected:
        int base1int;

    public:
        void set_base1int(int a) {
            base1int = a;
        }
};

class Base2 {
    protected:
        int base2int;

    public:
        void set_base2int(int a) {
        base2int = a;
    }
};

class Derived : public Base1, public Base2 {
    public:
        void show() {
            cout << " The value of Base1 is : " << base1int << endl;
            cout << " The value of Base2 is : " << base2int << endl;
            cout << " The addition of Base1 and Base2 is : " << base1int + base2int << endl;
        }
};

/*
    ! Theory Part

     *  The inherited derived class will look something like this:
         todo:   Data members :
                    ?  base1int --> protected
                    ?  base2int --> protected

         todo:   Member functions:
                    ? set_base1int() --> public
                    ? set_base2int() --> public
                    ? set_show() --> public
*/
int main()
{

  Derived sanket;
  sanket.set_base1int(30);
  sanket.set_base2int(30);
  sanket.show();
  return 0;
}

/* ---------------------------Example with private member----------------------------- */

#include <iostream>
using namespace std;

class base1 {
    private:
        int base1;

    public:

    void setBase1(int a) {
        base1 = a;
    }

    int ok1() {
        return base1;
    }
};

class base2 {
    private:
        int base2;

    public:
        void setbase2(int a)
        {
            base2 = a;
        }

        int ok2()
        {
            return base2;
        }
};

class derived : private base1, private base2
{
public:
  void display()
  {
    cout << "The value of base1 class is : " << ok1() << endl;
    cout << "The value of base2 class is : " << ok2() << endl;
  }
};

int main()
{

  derived s;
  int a;

  cout << "Enter the value of a for Base 1: ";
  cin >> a;
  s.setBase1(a);

  cout << "Enter the value of a for Base 2: ";
  cin >> a;
  s.setbase2(a);

  s.display();

  return 0;
}
