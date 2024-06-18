// https://www.geeksforgeeks.org/problems/rectangles-in-a-circle0457/1

class Solution {
  public:
    int rectanglesInCircle(int r) {
      int rectangles = 0 ;
        int l = 2*r;
        int b = 2*r;
        int p = 4*r*r;
        
        for(int i=1 ; i<l ; i++){
            for(int j=1 ; j<b ; j++){
                if((i*i+j*j) <= p){
                    rectangles++;
                }
            }
        }
        return rectangles;
    }
};