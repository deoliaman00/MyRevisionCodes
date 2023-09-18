/*
https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
class Solution {
public:
    void solve(int indx,string dig,string &temp,vector<string>&ans,string map[])
    {
        if(indx>=dig.length())
        {
            ans.push_back(temp);
            return;
        }
        int no=dig[indx]-'0'; // "1"
        string letter=map[no]; //"letter= "abc" "
        for(int i=0;i<letter.length();i++)
        {
            temp.push_back(letter[i]);
            cout<<"Index: "<<indx<<" i: "<<i<<" temp: "<<temp<<endl;
            solve(indx+1,dig,temp,ans,map);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if(digits=="")return {};
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;

        string temp="";
        solve(0,digits,temp,ans,map); // (0 to 2)
        return ans;
    }
};
*/