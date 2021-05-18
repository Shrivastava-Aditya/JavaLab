#include <iostream>
using namespace std;
struct node {
    int value;
    void
    Set(int val)
    {
        value = val;
    }
    void display()
    {
        cout << "Value = " << value;
    }
};
int main()
{
    node n1;
    n1.Set(9);
    n1.display();
}
