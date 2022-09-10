//Algorithm for checking if given number is even or odd for c++ language
#include <iostream>
using namespace std;

////////////////////ready function
void isItPrime(int n)
{
    if(n == 0)
        cout << "This is NOT prime number (0)";
    else if(n == 1)
        cout << "This is NOT prime number (1)";
    else
    {
        for(int x = 2; x < n; x++)
        {
            if(n % x == 0) //every time it finds a divisor the program stops and gives answer
            {
                cout << "This is NOT prime number (" << n << ")";
                break;
            }
            if(x == n-1) //if program did not found divisors it means the number is prime number
                cout << "This IS prime number (" << n << ")";
        }
    }
}
////////////////////

int main()
{
    int a = 1121; //number that is checked

    isItPrime(a); //using function

    return 0;
}
