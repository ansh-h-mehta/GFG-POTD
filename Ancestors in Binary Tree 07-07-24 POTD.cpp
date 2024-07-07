// https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1

class Solution {
  public:
   
    void helper(struct Node *root, int target,vector<int>&res,vector<int>&temp)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->data==target)
        {
            res=temp;
            return;
        }
        temp.push_back(root->data);
        helper(root->left,target,res,temp);
        helper(root->right,target,res,temp);
        temp.pop_back();
    }
  public:
    
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int>res;
        vector<int>temp;
        helper(root,target,res,temp);
        reverse(res.begin(), res.end());
        return res;
    }
};