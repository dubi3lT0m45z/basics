//Algorithm for importing given amount of numbers from .txt file in C++
#include <iostream>
#include <fstream>
using namespace std;

//////////////////////////////////////////function for importing
int import(int arr[], string filename) //requires (array to operate on; name of the file we are importing from)
{
    fstream file;
    int i = 0;

    file.open(filename, ios::in);
        if(!file.good()) //if file was not found the program will warn about it
        {
            cout << "File not found";
            return 0;
        }
        else
        {
            while (!file.eof())
            {
                file >> arr[i];
                i++;
            }
        }
    file.close();

    return i; //returns the exact size of array
}
/////////////////////////////////////////

int main()
{
    int sizeMAX = 30; //maximal size of array, if file has more numbers than given then the variable must be changed
    int arr[sizeMAX];
    int size;
    string filename;

    cout << "What is your file's name? ";
    cin >> filename; //question for files name, must be with its extension

    size = import(arr, filename); //imports to array and changes its exact size

    for(int i = 0; i < size; i++)
        cout << i+1 << ". " << arr[i] << "\n"; //reads numbers from array

    return 0;
}
