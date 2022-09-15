#include <iostream>
#include <fstream>
using namespace std;

void exportToFile(string fileName)
{

}

int main()
{
    string fileName, type;

    cout << "How you want to call new file? ";
    cin >> fileName;

    do
    {
        cout << "What kind of numbers you want to be generated?\n";
        cout << "N - natural\nW - whole\nZ - intefers" << endl;
        cin >> type;
    }
    while(type != 'N' || type != 'W' || type != 'Z');

    cout << type;

    return 0;
}
