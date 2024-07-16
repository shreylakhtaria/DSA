#include <iostream>

using namespace std;

void insertionsort(int n , int arr[])
{

    for (int i = 1; i < n ; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j>= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

}

int main ()
{
    cout << "Enter the size of the array:";
    int n , temp; 
    cin >> n;
    int* arr = new int[n]; 
    for (int i = 0 ; i < n ; i++)
    {
        cout << "Enter the elements of the array:";
        cin >> arr[i];
    }
        insertionsort(n, arr);
        cout << "The sorted array is: ";
        for (int i = 0; i < n; i++) 
        {
            cout << arr[i] << " ";
        }

}