#include <iostream>

using namespace std;
int linearseach(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }

        
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7};
    int key = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearseach(arr, key, n);
    if (result != -1)
    {
        cout << "Element found at index " << result;
    }
    else
    {
        cout << "Element not found";
    }
}
