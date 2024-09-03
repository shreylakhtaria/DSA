#include <iostream>
#include <algorithm>

using namespace std;

int bubble_sort(int arr[] , int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
              swap (arr[j], arr[j + 1]);
            }
        }
    }
}

int main ()
{
    int n;
    int arr[] = {9,8,5,6,3,4,1};

    n = sizeof(arr) / sizeof(arr[0]);
   
    bubble_sort(arr , n);
    cout << "Sorted arr is :" ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}