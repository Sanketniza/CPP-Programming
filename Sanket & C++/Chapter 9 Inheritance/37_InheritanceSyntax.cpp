
/* -------------------------------------------------------------------------- */
/*        37 //!          Inheritance syntax and visibility mode              */
/* -------------------------------------------------------------------------- */


#include<iostream>
using namespace std;
 
 //todo --> base class.....

 class Employee
    {
      public:
        int id;
        float salary;

        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}  // Default constructor --> If you making derived classes it's automatically base class constructor is called.
    }; 

 /*                                //^ derived class syntax                          
                  class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}     
                                 { class member/methods/ect..}      
*/

 /*  
   ? <-> Notes:--
   ~       ::::::::::: visibility mode ::::::::::::::
   * 1-> default visibility mode is private.
   * 2-> public derivation mode : Public members of the base class becomes public members of the derived class.
   * 3-> private derivation mode : Public and private members of the base class becomes private members of the derived class.
       --> here private members of the base class are never inherited
   * 4-> protected derivation: Public and private members of the base class becomes protected members of the derived class.
*/

// todo--> Creating a program class derived from Employee Base class
class Programmer :  public Employee {     //     public derivation

    public:
        int languageCode;
        
        Programmer(int inpId){ // this is an constructor......
            id = inpId;
            languageCode = 9;
        }
        void getData(){
            cout<<"The id is "<< id << endl;
        }
};
   
int main() { 

    Employee harry(1), rohan(2);
    cout << " The id of harry is : " << harry.id << " and salary is : "<<harry.salary<<endl;
    cout << " The id of rohan is : " << rohan.id << " and salary is : "<<rohan.salary<<endl;

    Programmer skillF(10);
    cout << " The id of skillF is : " <<skillF.languageCode<<endl;
    cout << " The id of skillF is : " <<skillF.id<<endl;
    skillF.getData();

    return 0;
}