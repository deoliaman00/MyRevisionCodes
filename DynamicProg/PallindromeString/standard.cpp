/*

 CLASSIC STANDARD SUBSTRING PALLINDROMIC PATTERN WITH WHICH WE CAN GET THE STRING TO BE PALLINDROME OR NOT

    int countSubstrings(string s)
    {
        // doing the dynamic programmic way
        int n=s.size();
        int dp[n][n];
        int count=0;
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                if(gap==0)
                {
                    // eg of gap0: a,b,c
                    dp[i][j]=true;
                }
                else if(gap==1)
                {
                    // eg of gap1: ab, bc
                    if(s[i]==s[j])
                    {
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                else{
                    // eg of gap2: abc, bcb, dad, ccc,
                    // eg of gap3: abba, bccb, kkck, derd

                    if(s[i]==s[j] && dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true)count++;
            }
        }
        return count;

    }

------------------------------------------------------------------------------------------------------------------------------------
VARIANT 2


    string longestPalindrome(string s)
    {
         int n=s.size();
        int dp[n][n];
        int count=0;
        int ith,jth;
        ith=jth=0;
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                if(gap==0)
                {
                    // eg of gap0: a,b,c
                    dp[i][j]=true;
                }
                else if(gap==1)
                {
                    // eg of gap1: ab, bc
                    if(s[i]==s[j])
                    {
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                else{
                    // eg of gap2: abc, bcb, dad, ccc,
                    // eg of gap3: abba, bccb, kkck, derd

                    if(s[i]==s[j] && dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                    }else{
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true)
                {
                    count++;
                    ith=i;
                    jth=j;
                }
            }
        }
        string ans=s.substr(ith,jth-ith+1);
        return ans;


    }



*/