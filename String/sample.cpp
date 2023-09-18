#include<bits/stdc++.h>
using namespace std;


int main()
{
    // string str="polio eremo 09299 dfjnrj jnrgjnrjn ee";
    // stringstream ss(str);
    // string san;
    // while(ss>>san)
    // {
    //     cout<<san<<endl;
    // }
    vector<string>str{"mobile","mouse","moneypot","monitor","mousepad"};
    sort(str.begin(),str.end());
    for(auto it:str)
    {
        cout<<it<<endl;
    }
}