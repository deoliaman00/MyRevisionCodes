/*

int func(int curr, int prev, vector<vector<int>> &nums, vector<vector<int>> &dp)
{
    // BASE CASE when the DS has ended
    if (curr == nums.size())
    {
        return 0;
    }
    // Memoised
    if (dp[curr][prev + 1] != -1)
    {
        return dp[curr][prev + 1];
    }
    // We are skipping the element
    int nottake = 0 + func(curr + 1, prev, nums, dp);

    int take = 0;
    // we are using the element into our array
    if (prev == -1 || nums[prev][1] < nums[curr][0])
    {
        take = 1 + func(curr + 1, curr, nums, dp);
    }

    return dp[curr][prev + 1] = max(take, nottake);
}



---------------------------------------------------------------------------------------------------------------------------------------

Top down approach

 int lengthOfLIS(vector<int>& nums)
    {
        int n=nums.size();
        int index=n-1;
        // edge case 1:
        // taking prev as index we need to make it -1 as no element is present now we need to edit it again
        // -1 0 1 2 3 4 5
        //  0 1 2 3 4 5

        // bhyi start taking the hints
        // so we will make a prev and curr index and move on with it
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int curr=n-1;curr>=0;curr--)
        {
            for(int prev=curr-1;prev>=-1;prev--)
            {
                int nottake=0+dp[curr+1][prev+1];
                int take=0;
                if(prev==-1||nums[prev]<nums[curr])
                {
                    take=1+dp[curr+1][curr+1];
                }
                dp[curr][prev+1]=max(take,nottake);
            }
        }
      return dp[0][0];
    }

    


*/
