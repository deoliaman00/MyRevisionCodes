#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    set<int>st;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    int check;
    cout<<"Enter the element to be checked"<<endl;
    cin>>check;
    cout<<"The lowerbound for this is: "<<*st.lower_bound(check)<<endl;
    cout<<"The upperbound for this is: "<<*st.upper_bound(check)<<endl;
}