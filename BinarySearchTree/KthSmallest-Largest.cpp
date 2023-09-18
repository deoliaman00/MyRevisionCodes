/*
 //GREATEST EVER K TH ELEMENT
 int ans;
    void func(Node *root,int &count,int k)
    {
        if(root==NULL)
        {
            return;
        }
        func(root->right,count,k);
        count++;
        if(count==k)
        {
            ans=root->data;
        }
        func(root->left,count,k);
    }
    int kthLargest(Node *root, int K)
    {
        int count=0;
        func(root,count,K);
        return ans;
    }


   // KTH SMALLEST ELEMENT
    int ans;
    void func(TreeNode *root,int &count,int k)
    {
        if(root==NULL)
        {
            return;
        }
        func(root->left,count,k);
        count++;
        if(count==k)
        {
          ans=root->val;
          return;
        }
        func(root->right,count,k);

    }
    int kthSmallest(TreeNode* root, int k)
    {
        int count=0;
        func(root,count,k);
        return ans;

    }



*/