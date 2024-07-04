// https://www.geeksforgeeks.org/problems/duplicate-subtrees/1

class Solution {
    string convertIntoString(Node *a,vector<Node*> &ans,unordered_map<string,int> &m){
        if(a==NULL) return "";
        string s = to_string(a->data);
        s += "L" + convertIntoString(a->left,ans,m) + "L";
        s += "R" + convertIntoString(a->right,ans,m) + "R";
        if(m[s]==1) ans.push_back(a);
        m[s]++;
        return s;
    }
  public:
    vector<Node*> printAllDups(Node* a) {
        unordered_map<string,int> m;
        vector<Node*> ans;
        convertIntoString(a,ans,m);
        return ans;
    }
};