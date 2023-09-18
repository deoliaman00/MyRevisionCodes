/*

class Solution {
public:
    int solve(vector<int>&arr, int l1, int l2)
    {
        // first we will move from left to right for the l1
        // then move from right to left for the l2
        // find the maximum sum -> left and right and find the maxsum
        // and use this
        int n=arr.size();
        vector<int>dp(n,0),dp2(n,0);

        int sum=0;
        // step 1: LEFT TO RIGHT WITH WINDOW OF l1 calucalted
        for(int i=0;i<n;i++)
        {
            if(i<l1)
            {
                sum+=arr[i];
                dp[i]=sum;
            }
            else{
                sum=sum-arr[i-l1];
                sum=sum+arr[i];
                dp[i]=max(dp[i-1],sum);
            }
        }

        // step2: RIGHT TO LEFT with window of l2 calucated
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            if(i+l2>n-1)
            {
                sum+=arr[i];
                dp2[i]=sum;
            }else{
                sum=sum-arr[i+l2];
                sum=sum+arr[i];
                dp2[i]=max(dp2[i+1],sum);
            }
        }
        int maxi=INT_MIN;
        for(int i=l1-1;i<n-l2;i++)
        {
            int sum=dp[i]+dp2[i+1];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
    int maxSumTwoNoOverlap(vector<int>&arr, int l1, int l2)
    {
        int maxi1=solve(arr,l1,l2);
        int maxi2=solve(arr,l2,l1);
        return max(maxi1,maxi2);
    }
};

*/