//Algotithm for geometric Brownian motion in C++
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

///////////////////////////ready function
float brownianMotion(int n)
{
    int i = 0;
    float s = 0, x = 0, y = 0, fi = 0;
    srand(time(NULL)); //it makes so random numbers will always be random

    while(i <= n)
    {
        fi = ((float)rand()/RAND_MAX)*2*M_PI; //direction
        x += cos(fi); //distance on the x axis
        y += sin(fi); //distance on the y axis
        i++;
    }
    s = sqrt(pow(x,2)+pow(y,2)); //final distance from the starting point(0,0)

    return s;
}
/////////////////////////////

int main()
{
    int n;

    cout << "How many steps? ";
    cin >> n; //number of steps

    cout << "The motion vector equals: " << brownianMotion(n);

    return 0;
}
