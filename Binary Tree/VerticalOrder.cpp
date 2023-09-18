/*
-----------------VERTICAL ORDER TRAVERSAL OF A BINARY TREE---------------------------(Type1)
In this we have multiple nodes or each difference



    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        map<int, map<int, vector<int>>> mp;
        queue<pair<Node *, pair<int, int>>> qt;
        qt.push(make_pair(root, make_pair(0, 0)));
        while (!qt.empty())
        {
            auto it = qt.front();
            qt.pop();
            Node *temp = it.first;
            int lvl = it.second.second;
            int diff = it.second.first;

            mp[diff][lvl].push_back(temp->data);
            if (temp->left)
            {
                qt.push(make_pair(temp->left, make_pair(diff - 1, lvl + 1)));
            }
            if (temp->right)
            {
                qt.push(make_pair(temp->right, make_pair(diff + 1, lvl + 1)));
            }
        }
        for (auto it : mp)
        {
            for (auto ti : it.second)
            {
                for (auto tii : ti.second)
                {
                    ans.push_back(tii);
                }
            }
        }
        return ans;
    }

*/

/*

==========================  TOP View of the Binary Tree ===============================================(type 2)
based on same technique of the -2 -1 0 1 2
In this we have only one node for each difference lvl


vector<int> topView(Node *root)
    {
        map<int,int>mp;
        queue<pair<Node*,int>>qt;
        qt.push(make_pair(root,0));

        while(!qt.empty())
        {
            auto it=qt.front();
            qt.pop();
            Node *temp=it.first;
            int diff=it.second;
            if(mp.find(diff)==mp.end())
            {
                mp[diff]=temp->data;
            }
            if(temp->left)
            {
                qt.push(make_pair(temp->left,diff-1));
            }
            if(temp->right)
            {
                qt.push(make_pair(temp->right,diff+1));
            }
        }
        vector<int>ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }


*/

/*

===========================================  BOTTOM VIEW OF A TREE  ================================================
    again we are using the same -2 -1 0 1 2
    now we are not checking that we need to stop it from entering values


    vector<int> bottomView(Node *root)
    {
        map<int,int>mp;
        queue<pair<Node*,int>>qt;
        qt.push(make_pair(root,0));

        while(!qt.empty())
        {
            auto it=qt.front();
            qt.pop();
            Node *temp=it.first;
            int diff=it.second;
            if(mp.find(diff)==mp.end())
            {
                mp[diff]=temp->data;
            }
            if(temp->left)
            {
                qt.push(make_pair(temp->left,diff-1));
            }
            if(temp->right)
            {
                qt.push(make_pair(temp->right,diff+1));
            }
        }
        vector<int>ans;
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }

*/
