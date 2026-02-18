
/* -------------------------------------------------------------------------- */
/*            //!            MultiLevel Inheritance                           */
/* -------------------------------------------------------------------------- */

  // todo --- > Here having one Base class and multiple (more the one) derived classes ...
   //* In this example student is Base class and exam and results are derived classes........

    //? () Multilevel inheritance
    //* Deriving a class from already derived class
    // todo --> Mammal = Animal + more
    // A --> B --> C
    // B is inherited from A and C is inherited from B ...

#include <iostream>
using namespace std;

class student {
    protected:
        int roll_no;

    public:
        void set_roll_no(int r){
            roll_no = r;
        }
        void get_roll_no(void); // Function declaration
};

void student ::get_roll_no() {
    cout << "roll_no: " << roll_no << endl;
}

class exam : public student {
    protected:
        float maths;
        float physics;

    public:
        void set_mark(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void get_mark(void);
};

void exam ::get_mark(){
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_no();
        get_mark();
        cout << "Your result is : " << (maths + physics) / 2 << " % " << endl;
    }
};

int main()
{

    result sanket;
    sanket.set_roll_no(45);
    //sanket.get_roll_no();

    sanket.set_mark(48.0, 90.5);
    //sanket.get_mark();


     sanket.display_result();

    return 0;
}


 /* ------------------------------------//^ By using private member -------------------------------------- */
/* 
 
#include <iostream>
using namespace std;

class student
{
private:
    int roll_no;

public:
    void set_roll(int);
    void get_roll(void);
};

void student::set_roll(int r)
{
    roll_no = r;
}

void student::get_roll(void)
{
    cout << "The Roll NO is :" << roll_no << endl;
}

class exam : public student
{
private:
    float math;
    float physics;

public:
    void set_mark(float, float);
    void get_mark(void);
    float get_math() { return math; }
    float get_physics() { return physics; }
};

void exam::set_mark(float m1, float m2)
{
    math = m1;
    physics = m2;
}

void exam::get_mark(void)
{
    cout << "The marks of Maths are :" << math << endl;
    cout << "The marks of Physics are :" << physics << endl;
}

class result : public exam
{
public:
    void display();
};

void result::display()
{
    get_roll();
    get_mark();
    cout << "The percentage is : " << (get_math() + get_physics()) / 2 << " % " << endl;
}

int main()
{
    result sanket;
    sanket.set_roll(40);
    sanket.set_mark(24.2, 25.4);
    sanket.display();

return 0;
}

 */