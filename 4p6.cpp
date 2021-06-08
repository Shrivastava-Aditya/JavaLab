// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class class1{
    private:
        int x,y;
    public:
        class1(int a,int b){
            cout << "Constructor is called;"<<endl;
            x = a;
            y = b;
        }
        int add(){return x+y;}
        ~class1(){cout << "destructor is called" << endl;}
};
int main() {
    
    class1 cl(5,6);
    cout << cl.add() << endl;

    return 0;
}
