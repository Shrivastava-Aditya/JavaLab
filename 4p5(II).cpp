// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Lab{
    private:
     int x,y;
    public:
        Lab(int a,int b){
            x = a;
            y = b;
        }
        
    int add(){
        cout << x+y << endl;}
};
int main() {
    
    Lab l(5,6);
    l.add();

    return 0;
}
