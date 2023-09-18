/*

   // lowestCommonAncestor
    TreeNode *func(TreeNode *root,int left,int right)
    {
        if(root==NULL)return NULL;
        // HERE WE ARE CHECKING THE VALUE LEFT SIDE
        if(root->val>left && right<root->val)
        {
            // REMEMBER THAT RETURN IT SO THAT
            // WE GET THE DEEP LEVEL NOT THE FIRST ROOT ALWAYS
            return func(root->left,left,right);
        }
        if(root->val<left && root->val<right)
        {
            // REMEMBER THAT RETURN IT SO THAT
            // WE GET THE DEEP LEVEL NOT THE FIRST ROOT ALWAYS
            return func(root->right,left,right);
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
      int left=p->val;
      int right=q->val;
      return func(root,left,right);
    }





*/