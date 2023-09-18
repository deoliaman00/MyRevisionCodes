/*
https : // practice.geeksforgeeks.org/problems/63c232252d445a377e01cd91adfd7d1060580038/1?page=1&company[]=Swiggy&sortBy=submissions
        int
        maxIntersections(vector<vector<int>> lines, int N)
{
    // line sweep algorithm
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        int lb = lines[i][0];
        int hb = lines[i][1];
        mp[lb] += 1;
        mp[hb + 1] -= 1;
    }
    int maxi = INT_MIN;
    int preSum = 0;
    for (auto it : mp)
    {
        preSum += it.second;
        maxi = max(maxi, preSum);
    }
    return maxi;
    }
*/