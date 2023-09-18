#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(int mid, vector<int> &bloomDay, int m, int k)
    {
        int size = 0, finalTarget = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            size = (bloomDay[i] <= mid) ? size + 1 : 0;
            if (size == k)
            {
                finalTarget++;
                size = 0;
            }
            if (finalTarget == m)
            {
                return true;
            }
        }
        return false;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        //BASE CASES
        if (bloomDay.size() == 0 || m == 0 || k == 0)
            return -1;
        long long m1 = m, k2 = k;
        if (m1 * k > bloomDay.size())
            return -1;


        int l = INT_MAX, r = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            l = min(l, bloomDay[i]);
            r = max(r, bloomDay[i]);
        }

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, bloomDay, m, k))
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};

int main()
{
    Solution s;
    vector<int> arr{1, 2, 5, 9};
    int threshold = 6;
}