
/* -------------------------------------------------------------------------- */
/*    56      //!           Virtual function in cpp                            */
/*    56      //?         ex - Run time polymorphism                           */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class BaseClass {
    public:
    int var_base;

    virtual void display() {
    /* 
        compare 55_pointer_to_derived_class method example with this example . and see how they are different
        in   55_pointer_to_derived_class  we did't use the virtual function method but in this example we are using the virtual function method ...... see the difference between both example..
    */
        cout << "1.  Displaying Base class variable var_base : " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived;

        void display() {
            cout << "2. Displaying base class variable var_base : " << var_base << endl;
            cout << "2. Displaying Derived class variable var_derived : " << var_derived << endl;
        }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived ;  //* Pointing base class pointer to derived class

   
    base_class_pointer -> var_base = 34;
    // base_class_pointer->var_derived = 134;  //* will throw error
    base_class_pointer -> display();

    base_class_pointer->var_base = 78;
    base_class_pointer->display();

    obj_derived.var_derived =45;
    obj_derived.display(); 

    return 0;
}

/* 
    #include <iostream>
    using namespace std;
    
    class Animal {
    public:
        virtual void makeSound() = 0;
    };
    
    class Dog : public Animal {
    public:
        void makeSound() {
            std::cout << "Woof!" << std::endl;
        }
    };
    
    class Cat : public Animal {
    public:
        void makeSound() {
            std::cout << "Meow!" << std::endl;
        }
    };
    
    int main() {
        Animal* myAnimal = new Dog();
        myAnimal->makeSound(); // Output: Woof!
    
        myAnimal = new Cat();
        myAnimal->makeSound(); // Output: Meow!
    
        return 0;
    } */