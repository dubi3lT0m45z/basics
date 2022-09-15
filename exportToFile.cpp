//Algorithm for writing numbers to file in C++
#include <iostream>
#include <fstream>
using namespace std;

///////////////////////////////////////////////////////////////////////function for random numbers
void exportToFileRandom(string fileName, int quantity, int min, int max)
{
    fstream file;
    int n;
    srand(time(NULL));

    file.open(fileName, ios::out);
        for(int i = 0; i < quantity; i ++)
        {
            n = min+rand()%(max-min+1); //generates random integer numbers
            file << n << "\n";
        }
    file.close();
}
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////function for your own numbers
void exportToFileWritten(string fileName, int quantity)
{
    fstream file;
    int n;

    file.open(fileName, ios::out);
        for(int i = 0; i < quantity; i ++)
        {
            cout << i+1 << ". number:\t";
            cin >> n;
            file << n << "\n";
        }
    file.close();
}
/////////////////////////////////////////////////////////////////////////

int main()
{
    string fileName, q1;
    int quantity, min, max;

    cout << "How you want to call new file? ";
    cin >> fileName; //giving new file its name

    do
    {
        cout << "Do you want random numbers, or you want to write them?\n";
        cout << "R - random\nW - write" << endl;
        cin >> q1;
    }while(q1 != "R" && q1 != "W");
    
    cout << "How many numbers do you want in file?\n";
    cin >> quantity; //amount of numbers that will be in file

    if(q1 == "R")
    {
        cout << "Minimal number: ";
        cin >> min; //minimal possible number if chosen random

        cout << "Maximal number: ";
        cin >> max; //maximal possible number if chosen random
    }

    if(q1 == "R")
        exportToFileRandom(fileName, quantity, min, max); //makes the numbers random
    else
        exportToFileWritten(fileName, quantity); //makes you to write every number

    return 0;
}
