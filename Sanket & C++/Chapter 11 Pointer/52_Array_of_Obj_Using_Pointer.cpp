
/* -------------------------------------------------------------------------- */
/*      52 //!            Array of object using pointer                       */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class shopItem {

    int id;
    float price;

public:
    void setData(int a, int b) {
        id = a;
        price = b;
    }

    void getData(void) {
        cout << "Code of this item is: " << id << endl;
        cout << "The price of this item is: " << price << endl;
    }
};

int main() {

    int size = 3;

    // int *ptr = &size;
    // int *ptr = new int[size];
    shopItem *ptr = new shopItem[size];  // todo : intended of this line we can write above line also
    //& Here we are creating a pointer type new shopItem array ...

    shopItem *ptrTemp = ptr;

    int p, i;
    float q;

    for (i = 0; i < size; i++) {
        cout << "Enter id and  price of Item : " << i << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q); // todo : indented of this line I can write below line..
        ptr->setData(p, q); // todo : above commented line also do similar work
        ptr++;
    }

    for (i = 0; i < size; i++) {
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}