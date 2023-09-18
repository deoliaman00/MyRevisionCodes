/*
https://leetcode.com/problems/maximum-profit-in-job-scheduling/

class Solution {
public:
    int n;

    int solve(int indx,vector<vector<int>>&arr,vector<int>&dp)
    {
        if(indx>=n)
        {
            return 0;
        }
        if(dp[indx]!=-1)
        {
            return dp[indx];
        }
        int given=lower_bound(arr.begin(),arr.end(),vector<int>{arr[indx][1],0,0})-arr.begin();

        int take=arr[indx][2]+solve(given,arr,dp);
        int nottake=0+solve(indx+1,arr,dp);

        return dp[indx]=max(nottake,take);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)
    {
        n=startTime.size();
        vector<vector<int>>arr(n,vector<int>(3,0));
        for(int i=0;i<n;i++)
        {
            arr[i][0]=startTime[i];
            arr[i][1]=endTime[i];
            arr[i][2]=profit[i];
        }
        sort(arr.begin(),arr.end());
        vector<int>dp(n,-1);
        int ans=solve(0,arr,dp);

        return ans;
    }
};

*/