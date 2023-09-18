#include <bits/stdc++.h>
using namespace std;

bool func(vector<vector<int>> vec)
{
    sort(vec.begin(),vec.end());
    int st=0,end=0;
    st=vec[0][0];
    end=vec[0][1];
    int n=vec.size();
    for(int i=1;i<n;i++)
    {
        if(vec[i][0]>st && vec[i][1]>end)
        {
            st=vec[i][0];
            end=vec[i][1];
        }else{
            return false;
        }
    }
    return true;

} 

int main()
{
    vector<vector<int>>vec{{0,30},{5,10},{15,20}};
    cout<<func(vec);
}

/*
Given an array of meeting time intervals where intervals[i] = [starti, endi], determine if a person could attend all meetings.

Example 1:

Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
Example 2:

Input: intervals = [[7,10],[2,4]]
Output: true

Constraints:

0 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti < endi <= 106
*/