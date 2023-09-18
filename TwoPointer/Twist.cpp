//https: // leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/description/

       /*
       class Solution {
       public:
           int numSubseq(vector<int>& nums, int target)
           {
               int M = 1e9+7;
               int n=nums.size();
               // we have to use the property that minimum and maximum given in the array
               sort(nums.begin(),nums.end());
               int i=0;
               int j=n-1;
               int ans=0;
               vector<int>power(n,0);
               power[0]=1;
               for(int i=1;i<n;i++)
               {
                   power[i]=(power[i-1]*2)%M;
               }
               while(i<=j)
               {
                   int sum=nums[i]+nums[j];
                   if(sum<=target)
                   {
                       ans=ans%M+ power[j-i]%M;
                       i++;
                   }
                   else if(sum>target)
                   {
                       j--;
                   }
               }
               return ans;
           }
       };

       */