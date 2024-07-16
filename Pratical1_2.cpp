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
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the key: ";
    cin >> k;
    
    printPairsDivisibleByK(arr, n, k);
    
    return 0;
}
