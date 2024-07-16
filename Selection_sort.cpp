// Author : Shrey Lakhtaria.
#include <iostream>

using namespace std;

void SelectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{

    int n;
    int arr[n];
    cout << "enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SelectionSort(n, arr);

    cout << "sorted arry is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "This code is written by 23CS039_Shrey" << endl;
}
