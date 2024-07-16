#include <iostream>
const int max_size = 40;
using namespace std;

int linearSearch(int arr[], int key, int n)
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
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[max_size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int result = linearSearch(arr, key, n);

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
