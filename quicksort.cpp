#include <iostream>

using namespace std;

    void quicksort(int arr[], int low, int high) {
        if (low < high) {
            // Choose a pivot element 

            int pivot = arr[high];
            // Partition the array around the pivot
            int i = low - 1;
            for (int j = low; j <= high - 1; j++) {
                if (arr[j] < pivot) {
                    i++;
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[i + 1], arr[high]);

            // Recursively sort the sub-arrays
            quicksort(arr, low, i);
            quicksort(arr, i + 2, high);
        }
    }

    int main (){
    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0; 

    

}