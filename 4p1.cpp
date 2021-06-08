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
        int add(){return x+y;}
};
int main() {
    
    Lab obj[] {Lab(1,1), Lab(2,2), Lab(3,3)};
    for(int i=0;i<3;i++)
        cout << obj[i].add() << endl;

    return 0;
}
