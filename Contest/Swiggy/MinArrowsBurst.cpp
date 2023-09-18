/*
https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/submissions/

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points)
    {
        int n=points.size();
        int bal=1;
        sort(points.begin(),points.end());
        int cl,ch;
        cl=points[0][0];
        ch=points[0][1];
        for(int i=1;i<n;i++)
        {
            if(ch<points[i][0])
            {
                bal++;
               // cl=points[i][0];
                ch=points[i][1];
            }else{
               // cl=max(cl,points[i][0]);
                ch=min(ch,points[i][1]);
            }
        }
        return bal;
    }
};
*/