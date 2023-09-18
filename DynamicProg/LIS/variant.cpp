/*
646. Maximum Length of Pair Chain https://leetcode.com/problems/maximum-length-of-pair-chain/description/

int findLongestChain(vector<vector<int>>& pairs)
    {
        vector<vector<int>>dp(1001,vector<int>(1001,0));

        // sort because qustn has mentioned dont mind the order of elements
        sort(pairs.begin(),pairs.end());


        // int ans=func(0,-1,pairs,dp);
        // return ans;

        int n=pairs.size();

        for(int curr=n-1;curr>=0;curr--)
        {
            for(int prev=curr-1;prev>=-1;prev--)
            {
                int nottake=0+dp[curr+1][prev+1];
                int take=0;

                if(prev==-1||pairs[prev][1]<pairs[curr][0])
                {
                    take=1+dp[curr+1][curr+1];
                }
                dp[curr][prev+1]=max(take,nottake);
            }
        }
      return dp[0][0];
    }




*/