
/* -------------------------------------------------------------------------- */
/*   51 //!         Pointers to object and arrow operator in cpp              */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class Complex {
    int real;
    int imaginary;

    public:
    void getData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void printData()
    {
        cout << "The rear number is :" << real << endl;
        cout << "The imaginary number is :" << imaginary << endl;
    }
};

int main() {
  // ? A
  // Complex s;
  // s.getData(2, 5);
  // s.printData();

  // todo: we can get same result by using this A and B

  //? B
  Complex *ptr = new Complex;
  (*ptr).getData(2, 5);
  (*ptr).printData();

  // todo : Arrow functions
  //? By using this method we getting same result like A and B

  //! C
  //   Complex *ptr = new Complex;
  //   ptr->getData(2, 5);
  //   ptr->printData();

  // todo : Arrow Objects
  //? By using this method we getting same result like A and B and C

  //! D
  // Complex *ptr1 = new Complex[4];
  // ptr1->getData(2, 5);
  // ptr1->printData();

  return 0;
}