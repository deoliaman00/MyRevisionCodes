/*


class Solution
{
public:
    vector<int> twoSum(vector<int> &a, int t)
    {
        int n = a.size();
        // Standard 2pointer question
        int i = 0, j = n - 1;
        while (i <= j)
        {
            int sum = a[i] + a[j];
            if (sum == t)
            {
                return {i + 1, j + 1};
            }
            if (sum > t)
            {
                j--;
            }
            else if (sum < t)
            {
                i++;
            }
        }
        return {-1, -1};
    }
};

*/