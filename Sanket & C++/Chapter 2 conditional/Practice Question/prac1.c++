
// Take integer input and print the absolute value of that integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of n : ";
    cin >> n;

    if (n > 0)
    {
        cout << n;
    }

    else
    {
        cout << -n;
    }
}

/*
  OUTPUT :-
          Enter the number of n : 55
          55

          Enter the number of n : -1
          1
 */
