
  /* -------------------------------------------------------------------------- */
  /*   36         //!       Inheritance In C++ Overview                         */
  /* -------------------------------------------------------------------------- */

   //* Reusability is a very important feature of the OOPs
   //* In c++ we can reuse a class and add additional features to it
   //* Reusing classes save time and money.
   //* Reusing already tested and debugged class will save a lot effort of developing and debugging the same thing again.


/* -------------------------------------------------------------------------- */
/*             //!         What is Inheritance in c++?                       */
/* -------------------------------------------------------------------------- */

//* Inherit the one property into another 
//* The concept of reusability is in c++ is supported using inheritance
//* we can reuse the properties of an existing class by ingesting from it
//* The existing class is called as the Base class
//* The new class which inherits is called as the Derived class
//* reusing classes save time and money
// todo --> suppose we have one class . This class is Base class because from this class we can create derived class . What is derived class --> suppose mazya kade ek employee name cha class ahe , tya pasun mi programer class banavali tyala programmer class la  mi derived class mhanato . jya jya methods and properties we are created in base class that not need to inherit(write) in derived class. we are extending the base class in derived class.


/* -------------------------------------------------------------------------- */
/*            //^          Type of Inheritance in c++ is                      */
/* -------------------------------------------------------------------------- */
    //~ 1) Single inheritance
    //~ 2) Multiple inheritance
    //~ 3) Hierarchical inheritance
    //~ 4) Multilevel inheritance
    //~ 5) Hybrid inheritance

    //? 1) Single inheritance
    //* A derived class with only one base class
    //todo --> one parent and one child < base class = parent  , derived class = child >
    //^ Ex- 1 base class --> one derived class

    //? 2) multiple inheritance
    //* A derived class with more than one base class
    //todo --> multiple parent and one child .
    //^ Ex- more than 1 base class --> one derived class

    //? 3) Hierarchical inheritance
    //* Several derived classes from a single base class
    //todo --> one parent and multiple child
    //^ Ex- 1 base class --> more than 1 derived class

    //? 4) Multilevel inheritance
    //* Deriving a class from already derived class
    // todo --> A --> B --> C --> D
    
    //? 5) Hybrid inheritance
    //* Hybrid inheritance is a combination of multiple inheritance and multiple inheritance
    //* A class is derived from two classes as in multi inheritance
    //* However, one of the parent classes is not a base class
    //todo -->  A -->> B + C -->> D



/* 

    ! For a protected member:
              
                todo-->          Public derivation      Private derivation       Protected derivation
            
    1) . Private members         Not Inherited           Not Inherited            Not Inherited
    2) . Protected members       Protected               Private                  Protected 
    3) . Public members          Public                  Private                  Protected


*/
    