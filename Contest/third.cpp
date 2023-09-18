/*https://leetcode.com/problems/visit-array-positions-to-maximize-score/description/*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<long long>> dp;
long long fn(int ind, int flag, vector<int> &nums, int x)
{
    if (ind == nums.size())
        return 0;
    if (dp[ind][flag] != -1)
        return dp[ind][flag];
    long long non_taken = fn(ind + 1, flag, nums, x);
    long long taken = nums[ind] + (nums[ind] % 2 == flag ? 0 : -x) + fn(ind + 1, nums[ind] % 2, nums, x);
    return dp[ind][flag] = max(taken, non_taken);
}
long long maxScore(vector<int> &nums, int x)
{
    dp.resize(nums.size(), vector<long long>(2, -1));
    return nums[0] + fn(1, nums[0] % 2, nums, x);
}
ll maxArray(int index,bool flag,vector<int>arr,int x)
{
    if(index==arr.size())
    {
        return 0;
    }
    ll nottake=maxArray(index+1,flag,arr,x);
    ll take=arr[index]+(flag==arr[index]%2?0:-x)+maxArray(index+1,arr[index]%2,arr,x);

    return max(take,nottake);
}

void func(vector<int>arr,int x)
{
    bool flag=arr[0]%2;
    long long ans=maxArray(1,flag,arr,x);
}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    func(arr,x);
}