/*
https://leetcode.com/problems/path-with-minimum-effort/description/

#define pp pair<int,pair<int,int>>
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights)
    {
        int N=heights.size();

        int M=heights[0].size();

        vector<vector<int>>dp(N,vector<int>(M,1e9));

        priority_queue<pp,vector<pp>,greater<pp>>pq;

        dp[0][0]=0;

        // we have both done
        // 1st priority queue and 2nd the
        pq.push({0,{0,0}});
        // {diff,{i,j}}

        int X[]={0,-1,0,1};
        int Y[]={-1,0,1,0};


        while(!pq.empty())
        {
            auto it=pq.top();

            pq.pop();

            int x=it.second.first;

            int y=it.second.second;

            int diff=it.first;

            if(x==N-1 && y==M-1)return diff;

            for(int i=0;i<4;i++)
            {
                int nX=x+X[i];
                int nY=y+Y[i];
                if(nX>=0 && nX<N && nY>=0 && nY<M)
                {
                    // now we are safe too
                    // we need two diff (old one) and (new one)
                    // which one is greatest will be inserted into the queue


                    int maxi=max(diff,abs(heights[x][y]-heights[nX][nY]));


                    // this dp data structure makes sure everytime and then
                    // that all the minimum are taken into account
                    // and at last we will return the top most (which will be the minimum one target to be returned)


                    if(dp[nX][nY]>maxi)
                    {
                        dp[nX][nY]=maxi;
                        pq.push({maxi,{nX,nY}});
                    }
                }
            }
        }
        return 0;

    }


*/