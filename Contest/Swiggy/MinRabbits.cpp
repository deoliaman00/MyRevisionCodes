/*
https://leetcode.com/problems/rabbits-in-forest/description/

class Solution {
public:
    int numRabbits(vector<int>& answers)
    {
        map<int,int>mp;
        for(auto it:answers)
        {
            mp[it]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            int size=it.first+1;
            int i=0;
            int currSize=0;
            while(currSize<it.second)
            {
                i++;
                currSize=size*i;
            }
            ans+=currSize;
        }
        return ans;
    }
};
*/