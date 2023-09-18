/*
// Stage 1
class Solution {
public:
    int trap(vector<int>& height)
    {
        int cost=0;
        int n=height.size();
        for(int i=1;i<n-1;i++)
        {
            // for the left maximum;
            int lMax=height[i];
            for(int k=0;k<i;k++)
            {
                lMax=max(lMax,height[k]);
            }

            int rMax=height[i];
            for(int k=i+1;k<n;k++)
            {
                rMax=max(rMax,height[k]);
            }

            int final=min(lMax,rMax);
            cost+=final-height[i];

        }
        return cost;
    }
};



-------------------------------------------------------------------------------------------------------------
Optimised one


class Solution {
public:
    int trap(vector<int>& height)
    {
        int cost=0;
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);


        // for the left maximum;

        left[0]=height[0];
        for(int k=1;k<n;k++)
        {
            left[k]=max(left[k-1],height[k]);
        }


        right[n-1]=height[n-1];
        for(int k=n-2;k>=0;k--)
        {
            right[k]=max(right[k+1],height[k]);
        }

        for(int i=0;i<n;i++)
        {
            cost+=(min(left[i],right[i])-height[i]);
        }
        return cost;
    }
};
*/