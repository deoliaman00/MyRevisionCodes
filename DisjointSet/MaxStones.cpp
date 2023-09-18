/*
//https://takeuforward.org/data-structure/most-stones-removed-with-same-row-or-column-dsu-g-53/

int maxRemove(vector<vector<int>>& stones, int n) {
       // total no of stones available =n

       int nx=0,ny=0;
       for(auto it:stones)
       {
           nx=max(nx,it[0]);
           ny=max(ny,it[1]);
       }
       int totalNode=nx+ny;

       DisjointSet obj(totalNode+1);
       unordered_map<int,int>mp;
       for(auto it:stones)
       {
           int rowNo=it[0];
           int colNo=it[1];
           colNo=colNo+nx+1;
           obj.unionBySize(rowNo,colNo);
           mp[rowNo]=1;
           mp[colNo]=1;
       }
       int ct=0;
       for(auto it:mp)
       {
           if(obj.findPar(it.first)==it.first)
           {
               ct++;
           }
       }

       return n-ct;
    }
*/