/*
class Solution
{
public:

//  APPROACH 1: TIME COMPLEXITY: O(N^3) AND SPACE COMPLEXITY: O(N^3)
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        set.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        for (auto it : set)
        {
            output.push_back(it);
        }
        return output;
    }
};
---------------------------------------------------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            // if element are same then keep moving it
            if(i>0 && nums[i]==nums[i-1])continue;

            // here just we are setting the 2 pointers
            int j=i+1;
            int k=n-1;

            // now till j<k this while loop will keep running
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                    j++;
                }else if(sum>0)
                {
                    k--;
                }else{
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    j++;
                    k--;
                    // so here was the ideal step now move forward but wait
                    // we forgot to readjust the same elements



                    ans.push_back(temp);
                    while(j<k && nums[j]==nums[j-1])j++; // skipping the same elements
                    while(j<k && nums[k]==nums[k+1])k--; // skipping the same elements

                }
            }
        }
        return ans;
    }
};
*/