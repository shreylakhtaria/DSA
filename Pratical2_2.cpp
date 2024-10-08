#include <iostream>
#include <algorithm>
using namespace std;

void lineartime(int n, int arr[])
{
    int fir = -1, sec = -1;

    // Find the first element that is greater than its next element
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            fir = i; // this is the first element
            break;
        }
    }
    
    // Find the first element that is smaller than its previous element
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            sec = i;
            break;
        }
    }
    
    swap(arr[fir], arr[sec]);
    
}
    // Swap the elements at indices first and second
    int main()
    {
        int arr[] = {3, 8, 6, 7, 5, 9};
        int n = sizeof(arr) / sizeof(arr[0]); // find the size of array

        lineartime(n, arr);
    
        // Print the sorted array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }