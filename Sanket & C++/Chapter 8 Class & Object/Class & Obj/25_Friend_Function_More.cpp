
// we are learning more about the Friends function. how they are access

                      /* -------------------------------------------------------------------------- */
                      /*                   //! 28..  simple example of friend function              */
                      /* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class Y; // TODO: We over compiler execute the code and inter inside the class X . when compiler come on the point of friend function he is confused because of he don't know where is the  Y . to avoid this problem we are pre-declared the class Y . --> It's indicated , Y aage present hai.

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    //* here Class X saying "void add " is my friend so I will give him permission to access my private object data also int class Y .
    //* .. so compiler is saying  to the class X ki yaar kaha to likha kro for understanding me
    friend void add(X,Y);  // friend he mera void add jo leta hai two object one from X class and another from Y class
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    //* here Class Y saying "void add " is my friend so I will give him permission to access my private object data also int class Y .
    //* .. so compiler is saying ki to the class X ki yaar kaha to likha kro for understanding me
    friend void add(X,Y);  //* friend hai mera "void add" jo leta hai two object one from X class and another from Y class
};

void add(X p1, Y p2)
{
    cout << "Addition of two numbers : " << p1.data + p2.num << endl;  // here you don't have permission to access the private data of class .so we need to add Friend function in class to solve this problem,
}

class Sanket {

    int data = 34;
    public:
        int om = 333;
    
    friend class ok;     
};


class ok{

    char s = 'a';
    public:

    ok() {
        cout << "OK IS CALLED";
    }

    void getData(Sanket s1 , char c) {
        cout << "Data from Sanket class " << s1.data << endl;
        cout << "Data from Sanket class " << s1.om << endl;
        cout << "Data from OK class " << s << endl;
    }
};

int main()
{
    X a;
    a.setValue(13);

    Y b;
    b.setValue(5);

    add(a,b);  // Don't write like this --> add (a + b ); <<-- it thrown error ............
    // here friend function "add (a,b)" doing work to do addition of two numbers by taking two numbers form two different classes......... 


    Sanket s;

    ok k;
    k.getData(s,'a');


    return 0;
}


