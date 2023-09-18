#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minMeetingRooms(vector<vector<int>> &intervals)
    {
        int rooms = 1;
        int n = intervals.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        if (intervals.empty())
            return -1;
        pq.push(intervals[0][1]);
        for (int i = 1; i < n; i++)
        {
            if (intervals[i][0] < pq.top())
            {
                rooms++;
            }
            else
            {
                pq.pop();
            }
            pq.push(intervals[i][1]);
        }
        return rooms;
    }
};

int main()
{
    // vector<vector<int>> intervals1 = {{0, 30}, {5, 10}, {15, 20}};
    // Solution ob1;
    // cout << "Example 1 Output: " << ob1.minMeetingRooms(intervals1) << endl;

    vector<vector<int>> intervals2 = {{7, 10}, {2, 4}};
    Solution ob2;
    cout << "Example 2 Output: " << ob2.minMeetingRooms(intervals2) << endl;

    return 0;
}
