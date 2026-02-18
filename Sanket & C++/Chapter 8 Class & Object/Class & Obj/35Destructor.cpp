    /* -------------------------------------------------------------------------- */
    /*              35       //!        Destructor                                */
    /* -------------------------------------------------------------------------- */

    //* Destructor never takes an argument nor does it return any value
    //* It is used to free the memory allocated by a constructor
    //* It gets executed automatically as the class is going to get destroyed
    //* It is used to clean things up before the program exits
    //* It can be defined as private, protected or public
     
    //* It can be defined as inline or not
    //* It can be defined as virtual or non-virtual
    //* It can be defined as noexcept or not
    //* It can be defined as deleted or not
    //* It can be defined as default or not
    //* It can be defined as explicit or not
    //* It can be defined as constexpr or not
    //* It can be defined as const or not
    //* It can be defined as volatile or not
    //* It can be defined as static or not
 
#include<iostream>
using namespace std;
 
 int count = 0; // global variable declaration..
 
class num{
   public:
    num(){  //todo --> This is an Constructor
       count++;
       cout << "Constructor called : " << count <<  endl;
    }

    ~num(){  //todo -->  This is an Destructor ...
       count--;
       cout << "Destructor called : " << count << endl;
    }
}; 
  int main() { 

    cout << "We are inside our main function " << endl;
    cout << "creating two objects"<<endl;
    
    num n1;
    {
        cout << "entering this block"<<endl;
        cout << "creating two more object " << endl;
        num n2 , n3;
        cout << "Exiting this block"<<endl;
    }  // here constructor n2 and n3 are destroyed that why Destructor is call ..destructor is called two time first time for n3 and second time for n2 . after that Destructor is called for n1.
        cout << "back to main"<<endl;
    return 0;
}
