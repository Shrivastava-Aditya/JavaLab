// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class c1{
    public:
        int x;
    class c2{
        int y;
    };
    void fun(c1 *n){
        cout << n->x;
    }
};

int main() {
    
    c1 c;
    c.x = 5;
    c.fun(&c);

    return 0;
}
