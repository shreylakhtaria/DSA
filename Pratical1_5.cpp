int specialArray(int nums[], int size) {
    for (int x = 0; x <= size; x++) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] >= x) {
                count++;
            }
        }
        if (count == x) {
            return x;
        }
    }
    return -1;
}
