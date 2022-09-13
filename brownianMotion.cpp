//Algotithm for geometric Brownian motion in C++
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

float brownianMotion(int n)
{
    int i = 0;
    float s = 0, x = 0, y = 0, fi = 0;
    srand(time(NULL));

    while(i <= n)
    {
        fi = ((float)rand()/RAND_MAX)*2*M_PI;
        x += cos(fi);
        y += sin(fi);
        i++;
    }
    s = sqrt(pow(x,2)+pow(y,2));

    return s;
}

int main()
{
    int n;

    cout << "How many steps? ";
    cin >> n;

    cout << "The motion vector equals: " << brownianMotion(n);

    return 0;
}
