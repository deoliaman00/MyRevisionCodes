/*
//https://takeuforward.org/data-structure/serialize-and-deserialize-a-binary-tree/

Time Complexity: O(n)
Space Complexity: O(n)
string serialize(TreeNode* root)
    {

        if(!root)return "";
        string ans="";
        queue<TreeNode*>qt;
        qt.push(root);
        while(!qt.empty())
        {
            TreeNode *node=qt.front();
            qt.pop();
            if(node==NULL){
                ans.append("#,");
            }
            else
            {
                ans.append(to_string(node->val)+',');
            }
            if(node!=NULL)
            {
                qt.push(node->left);
                qt.push(node->right);
            }

        }
        cout<<ans<<endl;
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return NULL;
        //1,2,3,#,#,4,5,#,#,#,#,
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode *root=new TreeNode(stoi(str));
        queue<TreeNode*>qt;
        qt.push(root);
        while(!qt.empty())
        {
            TreeNode *node=qt.front();
            qt.pop();
            getline(s,str,',');
            if(str=="#")
            {
                node->left=NULL;
            }else
            {
                TreeNode *leftNode=new TreeNode(stoi(str));
                node->left=leftNode;
                qt.push(leftNode);
            }
            getline(s,str,',');
            if(str=="#")
            {
                node->right=NULL;
            }else{
                TreeNode *rightNode=new TreeNode(stoi(str));
                node->right=rightNode;
                qt.push(rightNode);
            }
        }
        return root;
    }

*/