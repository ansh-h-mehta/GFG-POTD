https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1

class Solution {
  public:
   bool compute(Node* head) {
        
       vector<char> nodesvalue;
       
       Node* temp=head;
       while(temp!=NULL){
           vector<char>  charArray(temp->data.begin(),temp->data.end());
           for(char c : charArray)
           nodesvalue.push_back(c);
           temp=temp->next;
       }
       int n = nodesvalue.size();
       
       for(int i=0;i<n/2;i++)
       {
           if(nodesvalue[i]!=nodesvalue[n-1-i])
           return false;
       }
       return true;
    }
};