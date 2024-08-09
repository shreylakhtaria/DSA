#include <iostream>

using namespace std;

int binaryseach(int arr[] , int key , int size)

{
    int start = 0;
    int end = size;
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // to control overflow
        
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main ()
{
    // int arr[] = {1, 3, 4, 5, 6, 7};
    int key = 77;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;         
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binaryseach(arr, key, size);
    if (result != -1)
    {
        cout << "Element found at index " << result;
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}