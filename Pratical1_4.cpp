#include <iostream>

using namespace std;

int findSpecialNumber(int nums[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] >= size) {
            count++;
        }
    }
    if (count == size) {
        return size;
    }
    return -1;
}     

int main() {
    int nums[] = {3, 5,};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = findSpecialNumber(nums, size);
    cout << "Output: " << result << endl;

    return 0;
}