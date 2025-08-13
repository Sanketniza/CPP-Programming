
/* -------------------------------------------------------------------------- */
/*                          23 //! Memory Allocation                          */
/* -------------------------------------------------------------------------- */

#include <iostream>
using namespace std;

class shope
{

    int item[100];       // ^ Array of size 100
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)  //^ not taking any parameters...
    {
        counter = 0;
    }
    
    void setPrice(void);   //^ declaration of function (method) outside the class shope
    void displayPrice(void);
};

void shope ::setPrice(void)
{
    cout << "Enter the number of  items : " << counter + 1 << endl;
    cin >> item[counter];

    cout << "Enter Price of your item " << endl;
    cin >> itemPrice[counter];

    counter++;
}


void shope ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " The price of item :" << item[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    shope dukan;

    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}