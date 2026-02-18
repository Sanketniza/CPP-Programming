#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Programmer {
    
    private:
    string name;

    public:
        string getName() {
            return name;
        }

        void setName(string newName) {
            name = newName;
        }
};

int main() {

    Programmer p;
    p.setName("sanket");
    cout << "Name => " << p.getName() << endl;

    /* 
        Explanation: In the above example, we use the encapsulation and use getter (getName) and setter (setName) method which are used to show and modify the private data. This encapsulation mechanism protects the internal state of the Programmer object and allows for better control and flexibility in how the name attribute is accessed and modified.
    */
    
 return 0;
}

/* 
    Encapsulation 
    - The idea of encapsulation is to bind the data members and methods into a single unit. 

    # Best Practices for Encapsulation
       - Make class data private to hide implementation details and reduce coupling.
       - Use getter and setter functions instead of public fields to control access.
       - Ensure only valid values are assigned to private variables.
       - Do not provide setters for data that should not be modified externally (e.g., IDs).

*/