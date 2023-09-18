/*
https://leetcode.com/problems/min-cost-to-connect-all-points/?envType=daily-question&envId=2023-09-15



int minCostConnectPoints(vector<vector<int>>& p)
    {
        int n=p.size();
        DisjointSet obj(n);
        vector<pair<int,pair<int,int>>>pq;
        for(int i=0;i<n;i++)
        {
            int v1=p[i][0];
            int v2=p[i][1];
            for(int j=i+1;j<n;j++)
            {
                int v3=p[j][0];
                int v4=p[j][1];
                int euclid=abs(v1-v3)+abs(v2-v4);
                pq.push_back({euclid,{i,j}});
            }
        }

        sort(pq.begin(),pq.end());
        int ans=0;
        for(auto it:pq)
        {
            auto it2=it;
            int wt=it2.first;
            int one1=it2.second.first;
            int two2=it2.second.second;
            if(obj.findPar(one1)!=obj.findPar(two2))
            {
                obj.unionBySize(one1,two2);
                ans+=wt;
            }
        }
        return ans;
    }

*/