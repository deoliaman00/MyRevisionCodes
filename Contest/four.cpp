#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int target)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i+1; j < nums.size(); j++)
        {
            int sum1 = nums[i] + nums[j];
            if (sum1 < target)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> arr{-6, 2, 5, -2, -7, -1, 3};
    int target=-2;
    cout << countPairs(arr, target);
}