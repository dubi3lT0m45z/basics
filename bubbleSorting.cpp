// Bubble sort for c++ language
#include <iostream>
using namespace std;

/////////////////////// sorting function
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            if (arr[j] > arr[j + 1]) //swaps elements every time they are in wrong order
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
}
///////////////////////

int main()
{
    int n = 9; //size of array
    int arr[]={9,8,7,6,5,4,3,2,1}; //writing values to array

    for(int i=0; i<n ; i++)
        cout << arr[i] << "\t"; //reads unsorted array
    cout << endl;

    bubbleSort(arr, n); //using bubblesort algorithm

    for(int i=0; i<n ; i++)
        cout << arr[i] << "\t"; //reads sorted array
    cout << endl;

    return 0;
}
