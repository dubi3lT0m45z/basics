#include <iostream>
#include <fstream>
using namespace std;

void import(int arr[])
{
    fstream file;
    int i = 0;

    file.open("fileName.txt", ios::in);
        while (!file.eof())
        {
            file >> arr[i];
            i++;
        }
        
    file.close();
}

int main()
{
    int n = 20;
    int arr[n];

    import(arr);

    for(int i = 0; i < n; i++)
        cout << i+1 << ". " << arr[i] << "\n";

    return 0;
}
