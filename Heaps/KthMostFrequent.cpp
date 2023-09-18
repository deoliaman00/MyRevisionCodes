#include <bits/stdc++.h>
using namespace std;

// APPROACH 2 MOST OPTIMISED ONE
#define pp pair<int, int>
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (auto it : nums)
        {
            mp[it]++;
        }
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        for (auto it : mp)
        {
            pq.push({it.second, it.first});
            if (pq.size() > k)
            {
                pq.pop();
            }
        }

        vector<int> ans;

        while (!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

/*
BRUTE FORCE SOLUTION
class Solution {
public:
    static bool cmp(pair<int,int>&mp1,pair<int,int>&mp2)
    {
        if(mp1.second<mp2.second)return true;
        return false;
    }
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int,int>mp;
         for(auto it:nums)
        {
            mp[it]++;
        }
        vector<pair<int,int>>vc(mp.begin(),mp.end());
        sort(vc.begin(),vc.end(),cmp);
        int N=vc.size();
        int i=N-k;
        vector<int>ans;
        for(;i<N;i++)
        {
            ans.push_back(vc[i].first);
        }
        return ans;
    }
};

*/