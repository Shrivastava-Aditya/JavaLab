// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
namespace one{
    void print(){
        cout << "one" << endl;
    }
}
namespace two{
    void print(){
        cout << "two" << endl;
    }
}

int main() {
    
    one :: print();
    two :: print();

    return 0;
}
