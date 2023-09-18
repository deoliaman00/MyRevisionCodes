/*

#include <bits/stdc++.h>
using namespace std;

void putElementInside(int topper, stack<int> &st)
{
    if (st.empty() || st.top() < topper)
    {
        st.push(topper);
        return;
    }
    int temp = st.top();
    st.pop();
    putElementInside(topper, st);
    st.push(temp);
}
void func(stack<int> &st)
{
    if (!st.empty())
    {
        int topper = st.top();
        st.pop();
        func(st);
        putElementInside(topper, st);
        //  st.push(topper);
    }
    // return;
}
int main()
{
    stack<int> st;
    st.push(-1);
    st.push(-2);
    st.push(-3);
    st.push(-4);
    st.push(-5);
    st.push(-6);
    stack<int> temp = st;
    cout << "Before: " << endl;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    func(st);
    cout << "After: " << endl;
    // cout<<st.empty()<<endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}







*/
