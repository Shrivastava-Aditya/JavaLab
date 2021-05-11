#include <iostream>
using namespace std;
int refTest(int &a)
{
    cout<<a<<endl;
    a=a*2;
    return a;
}
int main()
{
    int n=44;
    int &a= n;
    cout<<"Initial condition\n"<<n<<endl;
    cout<<"Initial reference\n"<<a<<endl;
    a=refTest(n);
    cout<<"Final condition\n"<<n<<endl;
    cout<<"Final reference\n"<<a<<endl;
}
