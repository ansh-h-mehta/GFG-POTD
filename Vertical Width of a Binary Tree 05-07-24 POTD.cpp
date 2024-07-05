// https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1

class Solution {
  public:
    void binary(Node* root, int l,int &m,int &n){
        if(!root) return;
        m=min(m,l);
        n=max(n,l);
        binary(root->left,l-1,m,n);
        binary(root->right,l+1,m,n);
    }
    int verticalWidth(Node* root) {
        
        int l=0;
        int m=0;
        int n=0;
        if(!root) return 0;
        binary(root,l,m,n);
        return abs(m)+n+1;
    }
};
