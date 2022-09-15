#include <iostream>
#include <fstream>
using namespace std;

void exportToFileRandom(string fileName, int quantity, int min, int max)
{
    fstream file;
    int n;
    srand(time(NULL));

    file.open(fileName, ios::out);
        for(int i = 0; i < quantity; i ++)
        {
            n = min+rand()%(max-min+1);
            file << n << "\n";
        }
    file.close();
}

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

int main()
{
    string fileName, q1;
    int quantity, min, max;

    cout << "How you want to call new file? ";
    cin >> fileName;

    do
    {
        cout << "Do you want random numbers, or you want to write them?\n";
        cout << "R - random\nW - write" << endl;
        cin >> q1;
    }while(q1 != "R" && q1 != "W");
    
    cout << "How many numbers do you want in file?\n";
    cin >> quantity;

    if(q1 == "R")
    {
        cout << "Minimal number: ";
        cin >> min;

        cout << "Maximal number: ";
        cin >> max;
    }

    if(q1 == "R")
        exportToFileRandom(fileName, quantity, min, max);
    else
        exportToFileWritten(fileName, quantity);

    return 0;
}
