/*
class Solution
{
public:
    int dp[202][202];

    int func(int i, int j, vector<vector<int>> &grid)
    {
        int N, M;
        N = grid.size();
        M = grid[0].size();
        if (i == N - 1 && j == M - 1)
        {
            return dp[i][j] = grid[i][j];
        }
        if (i >= N || i < 0 || j >= M || j < 0)
        {
            return 1e9;
        }
        if (dp[i][j] != -1)
            return dp[i][j];
        int right = grid[i][j] + func(i + 1, j, grid);
        int down = grid[i][j] + func(i, j + 1, grid);
        return dp[i][j] = min(right, down);
    }
    int minPathSum(vector<vector<int>> &grid)
    {
        memset(dp, -1, sizeof(dp));
        int ans = func(0, 0, grid);
        return ans;
    }
};

*/