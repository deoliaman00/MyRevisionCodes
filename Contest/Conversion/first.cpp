#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalStrength(vector<int> &strength)
    {
        int sum = 0;
        int mod = 1000000007;

        for (int i = 0; i < strength.size(); i++)
        {
            int weakest = INT_MAX;
            int total = 0;

            for (int j = i; j < strength.size(); j++)
            {

                if (strength[j] < weakest)
                    weakest = strength[j];

                total = (total + strength[j]) % mod;
                int totalStrength = (static_cast<long long>(weakest) * total) % mod;

                sum = (sum + totalStrength) % mod;
            }
        }
        return sum;
    }
};

int main()
{

}
/*
arr: [1,3,1,2]


i: 0 j: 0 || weakest : 1 Total Strength: 1     arr[]= (1)
i: 0 j: 1 || weakest : 1 Total Strength: 4     arr[]= (1,3)
i: 0 j: 2 || weakest : 1 Total Strength: 5     arr[]= (1,3,1)
i: 0 j: 3 || weakest : 1 Total Strength: 7     arr[]= (1,3,1,2)




i: 1 j: 1 ||weakest : 3 Total Strength: 9     arr[]= (3)
i: 1 j: 2 ||weakest : 1 Total Strength: 4     arr[]= (3,1)
i: 1 j: 3 ||weakest : 1 Total Strength: 6     arr[]= (3,1,2)



i: 2 j: 2 ||weakest : 1 Total Strength: 1     arr[]= (1)
i: 2 j: 3 ||weakest : 1 Total Strength: 3     arr[]= (1,2)



i: 3 j: 3 ||weakest : 2 Total Strength: 4     arr[]= (2)

*/