/*


  vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        list<int> list;
        vector<int> ans;
        int N = nums.size();
        int i, j;
        i = j = 0;
        while (j < N)
        {
            if (list.empty())
            {
                list.push_back(nums[j]);
            }
            else
            {
                while (!list.empty() && list.back() < nums[j])
                {
                    list.pop_back();
                }
                list.push_back(nums[j]);
            }
            if (j - i + 1 == k)
            {
                ans.push_back(list.front());
                if (list.front() == nums[i])
                {
                    list.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }


*/
