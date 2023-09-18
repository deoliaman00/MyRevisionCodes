/*
https://practice.geeksforgeeks.org/problems/subset-sums2234/1


    void solve(int i,vector<int>&ans,vector<int>&arr,int sum)
    {
        if(i>=arr.size())
        {
            ans.push_back(sum);
            return;
        }

        solve(i+1,ans,arr,sum+arr[i]);

        solve(i+1,ans,arr,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        solve(0,ans,arr,0);
        sort(ans.begin(),ans.end());

        return ans;
 
*/