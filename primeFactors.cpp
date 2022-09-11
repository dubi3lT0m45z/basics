//Program to find prime factors of given positive number in C++ language
#include <iostream>
using namespace std;

/////////////////////////function
void primeFactors(int n)
{
    int a = 2;
    
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
//////////////////////////
  
int main()
{
    int n = 18; //number used in function
  
    primeFactors(n); //using function
  
    return 0; 
}
