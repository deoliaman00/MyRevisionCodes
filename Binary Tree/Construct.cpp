#include<bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    struct Node *left,*right;
    Node(int data)
    {
        value=data;
        left=right=NULL;
    }
};
int main()
{
    struct Node *root=new Node(5);
    root->left=new Node(4);
    root->right=new Node(6);
    root->left->right=new Node(5);

}