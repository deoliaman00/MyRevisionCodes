/*
https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/description/

class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        // the ans is in the range of 1 to 10001
        // so we must apply binary search to takle this situation
        int st=INT_MAX;
        int l=1,h=10001;
        int n=nums.size();

        while(l<=h)
        {
            int mid=(l+h)/2;
            int flag=0;
            int start=mid;
            for(int i=0;i<n;i++)
            {
                start+=nums[i];
                if(start<1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                st=min(st,mid);
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return st;
    }
};


/*


class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int n=nums.size()*2;
        for(int i=1;i<=10001;i++)
        {
            int flag=0;
            int sum=i;
            for(int i=0;i<nums.size();i++)
            {
                sum+=nums[i];
                if(sum<1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                return i;
            }
        }
        return 0;
    }
};

*/
