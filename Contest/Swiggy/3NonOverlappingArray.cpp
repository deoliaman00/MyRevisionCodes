/*
    vector<int> maxSumOfThreeSubarrays(vector<int> &nums, int k)
    {

        int n = nums.size();
        vector<int> prefix(n, 0);

        prefix[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] += nums[i] + prefix[i - 1];
        }

        vector<int> leftSum(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                sum += nums[i];
                leftSum[i] = sum;
            }
            else
            {
                sum = sum - nums[i - k];
                sum += nums[i];
                leftSum[i] = max(leftSum[i - 1], sum);
            }
        }

        vector<int> rightSum(n, 0);
        int sum2 = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i + k > n - 1)
            {
                sum2 += nums[i];
                rightSum[i] = sum2;
            }
            else
            {
                sum2 = sum2 - nums[i + k];
                sum2 += nums[i];
                rightSum[i] = max(rightSum[i + 1], sum2);
            }
        }

        int maxi = 0;

        for (int i = k - 1; i <= n - 2 * k; i++)
        {
            int ll = leftSum[i - 1], rr = rightSum[i + k], mid = (prefix[i + k - 1] - prefix[i - 1]);
            int totalSum = ll + rr + mid;
            maxi = max(maxi, totalSum);
        }
        cout << maxi << endl;
        return {};
    }
*/