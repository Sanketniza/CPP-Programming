
/* -------------------------------------------------------------------------- */
/*       45  //!          Example of virtual Base Class                       */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

/*
    Road Map:

       todo:  Student             [done it]
       todo:  Student --> Test    [done it]
       todo:  Student --> Sport   [done it]
       todo:  Test --> Result     [done it]
       todo:  Sport --> Result    [done it]
 */

class Student {
    protected:
        int roll_number;

    public:
        void set_number(int a) {
            roll_number = a;
        }

        void print_number(void) {
            cout << "Your roll number is : " << roll_number << endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths, physics;

    public:
        void set_mark(float m1, float m2) {
            maths = m1;
            physics = m2;
        }

        void print_mark(void) {
            cout << "Your mark of maths is : " << maths << endl;
            cout << "Your mark of physics is : " << physics << endl;
        }
};

class Sport : virtual public Student {
    protected:
        float score;

    public:
        void set_score(float sc) {
            score = sc;
        }

        void print_score(void) {
            cout << "Your score in PT is : " << score << endl;
        }
};

class Result : public Test, public Sport {
    private:
        float total;

    public:
        void display(void) {
            total = maths + physics + score;
            print_number();
            print_mark();
            print_score();
            cout << " Your total score is : " << total << endl;
        }
};

int main() {

    Result sanket;
    sanket.set_number(40);
    sanket.set_mark(70.45, 85.36);
    sanket.set_score(9.0);
    sanket.display();

    cout << "All tests passed";
    return 0;
}