#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        if (i == 2)
        {
            cout << "Array after 3rd pass: ";
            for (int k = 0; k < n; k++) 
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    bubbleSort(arr, n);

    return 0;
}