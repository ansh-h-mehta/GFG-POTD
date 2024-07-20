// https://www.geeksforgeeks.org/problems/remove-half-nodes/1

class Solution {
  private:
    Node* dfs(Node* root) {
        if(!root) return NULL;
        Node* left=dfs(root->left);
        Node* right=dfs(root->right);
        if(!left && !right) return root;
        if(!left) return right;
        else if(!right) return left;
        root->left=left;
        root->right=right;
        return root;
    }
  public:
    Node *RemoveHalfNodes(Node *root) {
        // code here
        Node *cur=dfs(root);
        return cur;
    }
};