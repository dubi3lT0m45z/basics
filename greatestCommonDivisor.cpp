#include <iostream>
using namespace std;

////////////////// ready function
void GCD(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "Greatest common divisor of given numbers is: " << a;
}
//////////////////

int main()
{
    int a = 423, b = 234;

    GCD(a, b);

    return 0;
}
