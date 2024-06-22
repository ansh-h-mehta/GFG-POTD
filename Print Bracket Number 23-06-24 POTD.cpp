// https://www.geeksforgeeks.org/problems/print-bracket-number4058/1

class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        int maxi =0;
        stack<pair<char,int>> s;
        vector<int> ans;
        for(int i =0;i< str.size();i++){
            char c =str[i];
            if(c == ')' && s.empty()){
                maxi+=1;
                ans.push_back(maxi);
                s.push({')',maxi});
            }
            else if(c == ')' && !s.empty()){
                if(s.top().first == '('){
                    ans.push_back(s.top().second);
                    s.pop();
                }
            }
            else if(c == '('){
                maxi+=1;
                ans.push_back(maxi);
                s.push({'(',maxi});
            }
        }
        return ans;
    }
};