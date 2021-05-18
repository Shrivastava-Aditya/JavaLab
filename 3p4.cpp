#include <iostream>
using namespace std;
class Square {
    public : 
        int num;
};

// friend function definition
int sq(Square d) {
    
    //accessing private members from the friend function
    d.num = d.num*d.num;
    return d.num;
}

int main() {
    Square test;
    cout << "Enter the number : " ;
    cin >> test.num;
    cout << "square is :  " << sq(test);
    return 0;
}
