#include <iostream>
using namespace std;

void insertionsort (int n , int arr[])
{
    for (int i = 0 ; i<n ; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main ()
{
    int n; 
    int arr[n];
    cout << "enter the size of arr: ";
    cin >> n;

    cout << "enter the element of arr: ";

    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    
    insertionsort(n, arr);
    cout << "the sorted arr is: ";

    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i];
    }
}