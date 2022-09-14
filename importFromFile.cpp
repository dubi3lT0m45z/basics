#include <iostream>
#include <fstream>
using namespace std;

int import(int arr[], string filename)
{
    fstream file;
    int i = 0;

    file.open(filename, ios::in);
        while (!file.eof())
        {
            file >> arr[i];
            i++;
        }
    file.close();

    return i;
}

int main()
{
    int size = 30;
    int arr[size];
    int n;
    string filename;

    cout << "What is your file's name? ";
    cin >> filename;

    n = import(arr, filename);

    for(int i = 0; i < n; i++)
        cout << i+1 << ". " << arr[i] << "\n";

    return 0;
}
