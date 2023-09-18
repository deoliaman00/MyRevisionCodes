/*
#define ll long long
class Solution
{
public:
    int lowerBoundCustom(int val, vector<vector<int>> &rides)
    {
        int low = 0, high = rides.size() - 1;
        while (low <= high)
        {
            int mid = (low) + (high - low) / 2;
            if (val > rides[mid][0])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }
    ll solve(int indx, vector<vector<int>> &rides, vector<ll> &dp)
    {
        if (indx >= rides.size())
            return 0;
        if (dp[indx] != -1)
        {
            return dp[indx];
        }
        int findx = lowerBoundCustom(rides[indx][1], rides);

        ll totalM = (rides[indx][1] - rides[indx][0]) + rides[indx][2];

        ll take = totalM + solve(findx, rides, dp);

        ll nottake = 0 + solve(indx + 1, rides, dp);

        return dp[indx] = max(take, nottake);
    }
    long long maxTaxiEarnings(int n, vector<vector<int>> &rides)
    {
        vector<ll> dp(100001, -1);
        sort(rides.begin(), rides.end());
        ll ans = solve(0, rides, dp);
        return ans;
    }
};

*/