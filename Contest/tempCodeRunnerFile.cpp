#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int target)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
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
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout<<countPairs(arr, x);
}