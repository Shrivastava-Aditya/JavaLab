
#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
float add(int a,int b,float c)
{
    return float(add(a,b))+c;
}
double add(double a, double b, int c)
{
    return a+b+double(c);
}

int main() {

    cout << add(5,6) << endl;
    cout << add(5.1,6.1) << endl;
    cout << add(5,6,7.1) << endl;
    cout << add(5.1,6.1,7) << endl;
    
    return 0;
}
