
  
   /* -------------------------------------------------------------------------- */
   /*          54 //!               Theory of polymorphismX                      */
   /* -------------------------------------------------------------------------- */

/* 
   todo:   polymorphism
            poly = many
            morphism = form

     *  - One name and multiple forms
     *  -  polymorphism allows the same method or object to behave differently based on the context,
     *  - eg. Fuction overloading , Operator overloading
     *  - eg. Virtual Function 
     
   
    ?                  --------------------
    ?                  -   Polymorphism   -
    ?                  --------------------
    ?                           |
    ?                           V
    ?                   -------------------
    ?                   |                  |
    ?                   V                  V
    ?             Compile time         Run time
    ?             polymorphism         polymorphism
    ?                   |                    |
    ?                   V                    V 
    ?               ------------        Virtual function (Function Overriding)
    ?              |           |
    ?              V           V 
    ?        Function         Operator 
    ?        overloading      Overloading
 
    - Function Overloading - Multiple functions with the same name but different parameters within the same scope.
        void print(int i) {
            prints integer
        }

        void print(double f) {
            prints double
        }

        void print(const char* c) {
            prints string
        }

    - operator Overloading - 

    
    - function Overrinding - Function overriding is part of runtime polymorphism. It occurs when a derived class provides a specific implementation for a function that is already declared in its base class. This requires the base class function to be declared with the virtual keyword. 

        class Animal {
            public:
                virtual void speak() {
                    Base implementation
                }
            };

            class Dog : public Animal {
            public:
                void speak() override {
                    Derived implementation specific to Dog
                }
            };


----------------------------------------------------------------------

    todo:    Polymorphism in c++ can be two types:
    
    *    1) Compile time polymorphism
    ^        1.1 function overloading
    ^        1.2 operator overloading

    *   2) Run time polymorphism
    ^       2.1 virtual function 


*/