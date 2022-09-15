#include <iostream>
#include <fstream>
using namespace std;

void exportToFile(string fileName)
{

}

int main()
{
    string fileName, q1, type;

    cout << "How you want to call new file? ";
    cin >> fileName;

    do
    {
        cout << "Do you want random numbers, or you want to write them?\n";
        cout << "R - random\nW - write" << endl;
        cin >> q1;
    }while(q1 != "R" && q1 != "W");
    
    cout << "How many numbers do you want in file?\n";
    cin >> fileName;

    if(q1 == "W")
    {

    }
    else
    {
        do
        {
            cout << "What kind of numbers you want to be generated?\n";
            cout << "N - natural\nW - whole\nZ - intefers" << endl;
            cin >> type;
        }
        while(type != "N" && type != "W" && type != "Z");
    }

    return 0;
}
