// https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        map<int,vector<int>>mp;
        int r=-1;
        for(int i=0;i<parent.size();i++){
            if(parent[i]==-1){
                r=i;
            }
            else{
                mp[parent[i]].push_back(i);
            }
        }
        Node*root=new Node(r);
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node*node=q.front();
            q.pop();
            int valnode=node->data;
            vector<int>v=mp[valnode];
            if(v.size()==1){
                node->left=new Node(v[0]);
                q.push(node->left);
            }
            else if(v.size()==2){
                node->left=new Node(v[0]);
                q.push(node->left);
                node->right=new Node(v[1]);
                q.push(node->right);
            }
        }
        return root;
    }
};