#include <iostream>
using namespace std; 

void printPairsDivisibleByK(int arr[], int size, int k) {
    int remainderCount[k] = {0};

    // Count the remainders of each element when divided by k
    for (int i = 0; i < size; i++) {
        int remainder = arr[i] % k;
        remainderCount[remainder]++;
    }

    // Check if pairs can be formed
    for (int i = 0; i < size; i++) {
        int remainder = arr[i] % k;
        int complement = (k - remainder) % k;

        // If the complement exists and its count is greater than 0
        if (remainderCount[complement] > 0) {
            remainderCount[complement]--;
            cout << "(" << arr[i] << ", " << complement << ")" << endl;
        }
    }
}

int main() 
{
    int arr[] = {3, 1, 2, 6, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    cout << "Pairs can be formed:" << endl;
    printPairsDivisibleByK(arr, size, k);

    return 0;
}
