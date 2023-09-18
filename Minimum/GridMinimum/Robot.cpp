/*
class Solution
{
public:
    int dp[101][101];
    int uq(int i, int j, int m, int n)
    {
        if (i < 0 || i >= m || j < 0 || j >= n)
        {
            return 0;
        }
        if (i == m - 1 && j == n - 1)
        {
            return dp[i][j] = 1;
        }
        if (dp[i][j] != -1)
            return dp[i][j];

        int r = uq(i + 1, j, m, n);
        int d = uq(i, j + 1, m, n);
        return dp[i][j] = r + d;
    }
    int uniquePaths(int m, int n)
    {
        memset(dp, -1, sizeof(dp));
        return uq(0, 0, m, n);
    }
};

*/