/*

    TreeNode* searchBST(TreeNode* root, int val)
    {
        // simply checking the root node and getting all it done
        Time Complexity:- O(logn)
        Space Complexity:-O(1)

        while( root!=NULL && root->val!=val)
        {
            root=(val>root->val)?root->right:root->left;
        }
        return root;

    }


.....................................................................................................

        Constructing the BST

        order when n=n-1
        Mid: 2 Low: 0 High: 4
        Mid: 0 Low: 0 High: 1
        Mid: 1 Low: 1 High: 1
        Mid: 3 Low: 3 High: 4
        Mid: 4 Low: 4 High: 4

        order when n=n
        Mid: 2 Low: 0 High: 5
        Mid: 0 Low: 0 High: 1
        Mid: 1 Low: 1 High: 1
        Mid: 4 Low: 3 High: 5
        Mid: 3 Low: 3 High: 3
        Mid: 5 Low: 5 High: 5
        Mid: 1 Low: 0 High: 2
        Mid: 0 Low: 0 High: 0
        Mid: 2 Low: 2 High: 2

        TreeNode *func(vector<int>&nums,int low,int high)
        {
            if(low>high)
            {
                return NULL;
            }
            int mid=(low+high)/2;

            cout<<"Mid: "<<mid<<" Low: "<<low<<" High: "<<high<<endl;

            TreeNode *root=new TreeNode(nums[mid]);

            root->left=func(nums,low,mid-1);

            root->right=func(nums,mid+1,high);

            return root;
        }
        TreeNode* sortedArrayToBST(vector<int>& nums)
        {
            int N=nums.size();
            return func(nums,0,N);

        }
...................................................................................................................
CHECKING BST IN THE GRAPH/TRee

    bool isValid(TreeNode *root,long long left,long long right)
    {
        //IF THE NODE HAS NOTHING JUST RETURN IT

        if(root==NULL)
        {
            return true;
        }
       // THE ELEMENT SHOULD BE ALWAYS INSIDE THE RANGE AND MAKE SURE WHENEVER OUTSIDE IT IS TURNED TO FALSE
        if(left>=root->val || right<=root->val)
        {
            return false;
        }
        //THIS CHECKS FOR THE LEFT SIDE AND ALSO TURNS IT TO FALSE

        bool leftCheck=isValid(root->left,left,root->val);
        
        ///THIS CHECKS FOR THE RIGHT SIDE AND TURNS IT TO TRUE

        bool rightCheck=isValid(root->right,root->val,right);

       // IF BOTH OF THESE CHECKS WERE FINE IN THE LAST JUST RETURN IT

        if(leftCheck && rightCheck)return true;


        return false;

    }
    bool isValidBST(TreeNode* root)
    {
       // exception case is when any node on the right side
       // will be smaller than the root node

       long long high=1000000000000;

       long long low=-100000000000;

       bool ans=isValid(root,low,high);

       return ans;

    }

*/