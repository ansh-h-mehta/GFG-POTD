// https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1

class Solution {
    void inorder(Node* a,Node **pre){
        if(!a) return;
        inorder(a->left,pre);
        (*pre)->next = a;
        *pre = a;
        inorder(a->right,pre);
        return;
    }
  public:
    void populateNext(Node *root) {
        Node *temp = new Node(-1);
        inorder(root, &temp);
        return;
    }
};