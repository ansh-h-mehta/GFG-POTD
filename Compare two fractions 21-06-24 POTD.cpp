// https://www.geeksforgeeks.org/problems/compare-two-fractions4438/1

class Solution {
  public:
    string compareFrac(string str) {
        // Code here
        string a="",b="",c="",d="";
        int n=str.length();
        int i=0;
        while(i<n && str[i]!='/'){
            a+=str[i];
            i++;
        }
        i++;
        while(i<n && str[i]!=','){
            b+=str[i];
            i++;
        }
        i++;
        while(i<n && str[i]!='/'){
            c+=str[i];
            i++;
        }
        i++;
        while(i<n){
            d+=str[i];
            i++;
        }
        int aint=stoi(a),bint=stoi(b),cint=stoi(c),dint=stoi(d);
        int y=(aint*dint-bint*cint);
        if(y>0){
            return to_string(aint)+"/"+to_string(bint);
        }
        else if(y<0){
            return to_string(cint)+"/"+to_string(dint);
        }
        else return "equal";
    }
};