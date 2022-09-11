//Program to find prime factors of given positive number in C++ language
#include <iostream>
using namespace std;

void primeFactors(int n)
{
    int a = 2;

    if(n == 1)
        cout << n;

    while(n > 1)
    {
        while(n % a == 0)
        {
            n /= a;
            cout << a << "\t";
        }
        
        a++;
    }

    if(n != 1)
        cout << n;
} 
  
int main()
{
    int n = 18;
  
    primeFactors(n);
  
    return 0; 
}
