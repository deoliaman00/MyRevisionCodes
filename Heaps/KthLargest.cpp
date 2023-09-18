#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findKthLargest1(vector<int> &nums, int k)
    {
        // the max heap 5 4 3 2 1
        priority_queue<int> pq;

        // the min heap=> 1 2 3 4 5
        // priority_queue<int,vector<int>,greater<int>>pq;
        for (auto it : nums)
        {
            pq.push(it);
        }
        int i = 1;
        while (i != k)
        {
            cout << pq.top() << " i: " << i++ << endl;
            pq.pop();
            // i++;
        }
        return pq.top();
    }
    int findKthLargest2(vector<int> &nums, int k)
    {
        // MIN HEAP IS USED HERE
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto i : nums)
        {
            pq.push(i);
            if (pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};

int main()
{
    Solution s;
    vector<int>arr{1,2,3,4,5};
    int k=4;
    s.findKthLargest1(arr,k);// time complexity-> O(n* k*(logn))
    s.findKthLargest2(arr,k);
}