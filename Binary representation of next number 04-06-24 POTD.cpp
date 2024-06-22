// https://www.geeksforgeeks.org/problems/binary-representation-of-next-number3648/1

class Solution {
  public:
    string binaryNextNumber(string s) {

        int n=s.length();
        int c=1;
        string h="";
        int k=0;
        for(int i=0;i<n;i++){
            if(k==1){
                h+=s[i];
            }
           else if(s[i]=='1'){
                   k=1;
                   h+=s[i];
            }
        }
        s=h;
        n=s.length();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0' && c==1){
                s[i]='1';
                c=0;
                break;
            }
            else if(s[i]=='1' && c==1){
                s[i]='0';
            }
        }
        reverse(s.begin(),s.end());
        if(c==1){
            s+="1";
        }
                reverse(s.begin(),s.end());
return s;
        
    }
};