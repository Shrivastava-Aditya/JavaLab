#include <iostream>
using namespace std;
void printNumbers(int n)
{
    for(int i=n;i>0;i--){
        cout << i << endl;
    }
}

int main() {

    printNumbers(5);

    return 0;
}
