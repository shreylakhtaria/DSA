#include <iostream>
using namespace std;

void printPairsDivisibleByK(int arr[], int n, int k) {
    int freq[k] = {0};
    
    for (int i = 0; i < n; i++) {
        int remainder = arr[i] % k;
        freq[remainder]++;
    }
    
    for (int i = 0; i < n; i++) {
        int remainder = arr[i] % k;
        int complement = (k - remainder) % k;
        
        if (freq[complement] > 0) {
            cout << "(" << arr[i] << ", " << complement << ")" << endl;
            freq[complement]--;
        }
    }
}

int main() {
    int arr[] = {3, 1, 2, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    
    cout << "MY name is Shrey Lakhtaria from 23cs039" << endl;
    printPairsDivisibleByK(arr, n, k);
    
    return 0;
}
