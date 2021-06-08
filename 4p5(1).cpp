#include <iostream>
using namespace std;
class Lab{
    private:
     int x,y;
    public:
        Lab(){
            cout << "Integers are declared" << endl;
        }
        
    int add(){
        cin >> x;
        cin >>y;
        cout << x+y << endl;}
};
int main() {
    Lab l;
    l.add();
    return 0;
}
