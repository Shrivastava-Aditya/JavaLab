#include <iostream>
using namespace std;

int main()
{
    //demonstration of reference variables
    int x = 7;
    int y = x;
    cout << "y is referencing to x\ninitial value of y  and x is\n" << endl ;
    cout << y << endl << x;
    y = 5;
    cout << "\nAfter changing the value of y\n";
    cout << "value of y  and x is" << endl ;
    cout << y << endl << x;
    return 0;
}
