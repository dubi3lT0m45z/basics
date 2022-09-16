//algorithm for lest common multiple in C++
#include <iostream>
using namespace std;

///////////////////////function for least common multiple
void LCM(int x, int y)
{
    int lcm;

    if(x > y)
        lcm = x;
    else
        lcm = y;

    while(lcm % x != 0 || lcm % y != 0)
        lcm++;

    cout << "Least common multiplication of given numbers is: " << lcm;
}
////////////////////////

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter secound number: ";
    cin >> b;

    LCM(a,b);

    return 0;
}
