#include<iostream>
using namespace std;
 
class base{ 
    protected:
        int a;

    public:
      int b;
  
}; 

 /* 
     ! For a protected member:
              
                todo-->          Public derivation      Private derivation       Protected derivation
            
    1) . Private members         Not Inherited           Not Inherited            Not Inherited
    2) . Protected members       Protected               Private                  Protected 
    3) . Public members          Public                  Private                  Protected
    
*/

 class derived : protected base {

 };


int main() { 
    base b;
    derived d;
    // cout << d.a; //? Will not work since a is protected in both base as well as derived class....
    return 0;
}