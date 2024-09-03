#include <iostream>
using namespace std;

void countSort(int arr[], int n)
{
    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {   
        if (arr[i] > max)
            max = arr[i];
    }

    // Create a count array to store the count of each element
    int count[max + 1] = {0};

    // Store the count of each element in the count array
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;        
    }

    // Modify the count array to store the actual position of each element in the sorted array
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted array
    int temp[n];

    // Build the sorted array
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[arr[i]] - 1] = arr[i]; // going to the index of the count array and then decrementing it by 1
        count[arr[i]]--; // decrementing the count array because we have already placed the element in the sorted array
    }

    // Copy the sorted array back to the original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    countSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}