#include <iostream>
using namespace std;

void swap(int &a, int &b) {
   int t = a;
   a = b;
   b = t;
}
void swap(int&, int&);
int main() {
    
    int a,b;
    cout <<"Initial value of a and b are\n";
    cin >> a >> b;
    cout << "after swapping\n";
    swap(a,b);
    cout << a << endl << b;
    return 0;
}
