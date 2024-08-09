#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int specialArray(const vector<int>& nums)
{
    int size = nums.size();
    vector<int> count(size + 1, 0);

    for (int num : nums)
    {
        if (num <= size)
        {
            count[num]++;
        }
        else
        {
            count[size]++;
        }
    
    }

    int totalCount = 0;
    for (int i = size; i >= 0; i--)
    {
        totalCount += count[i];
        if (totalCount == i)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    int result = specialArray(nums);
    cout << "Output using specialArray: " << result << endl;

    return 0;
}
