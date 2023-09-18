/*
https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1?page=1&company[]=Swiggy&sortBy=submission

int stockBuyAndSell(int n, vector<int> &prices) {

        int profit=0;
        int prevVal=prices[0];
        for(int i=1;i<n;i++)
        {
            if(prices[i]>prevVal)
            {
                profit+=prices[i]-prevVal;
                prevVal=prices[i];
            }else{
                prevVal=prices[i];
            }
        }
        return profit;
    }

*/