#include <iostream>

using namespace std;

int specialArray(int nums[], int size)
{
    for (int x = 0; x <= size; x++)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] >= x)
            {
                count++;
            }
        }
        if (count == x)
        {
            return x;
        }
    }
    return -1;
}

    int findspecialnumberbinary(int nums[], int size)
    {
        int left = 0;
        int right = size;

        while (left <= right)
        {
            int mid = left + (right - left) / 2; //mid value to control overflow
            int count = 0;

            for (int i = 0; i < size; i++)
            {
                if (nums[i] >= mid)
                {
                    count++;
                }
            }
//binary search
            if (count == mid)
            {
                return mid;
            }
            else if (count < mid)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return -1;
    }

    int main()
    {
        int nums[] = {3,5};
        int size = sizeof(nums) / sizeof(nums[0]);

        int result = specialArray(nums, size);
        cout << "Output using findSpecialNumber: " << result << endl;

        int binaryResult = findspecialnumberbinary(nums, size);
        cout << "Output using findspecialnumberbinary: " << binaryResult << endl;

        return 0;
    }