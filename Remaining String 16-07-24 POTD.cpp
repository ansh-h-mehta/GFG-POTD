// https://www.geeksforgeeks.org/problems/remaining-string3515/1

class Solution {
  public:
    string printString(string s, char ch, int count) {
        int i=0;
        while(i < s.size() && count){
            if(s[i] == ch){
                count--;
            }
            i++;
        }
        return s.substr(i);
    }
};