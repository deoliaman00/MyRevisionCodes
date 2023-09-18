/*

int countStrings(long long int N)
{
    vector<long long int> dp0(N + 1, 0);
    vector<long long int> dp1(N + 1, 0);

    dp0[1] = dp1[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        dp1[i] = dp1[i - 1] + dp0[i - 1];
        dp0[i] = dp1[i - 1];
    }
    int ans = dp0[N] + dp1[N];
    return ans;
}

*/