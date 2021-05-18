#include <iostream>
using namespace std;
class Cube {
    public : 
        int num;
        friend int cube(Cube);
};

// friend function definition
int inline cube(Cube d) {
    
    //accessing private members from the friend function
    d.num = d.num*d.num*d.num;
    return d.num;
}

int main() {
    Cube test;
    cout << "Enter the number : " ;
    cin >> test.num;
    cout << "cube is :  " << cube(test);
    return 0;
}
