// https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1

class Solution {
    public:
    Node* removeAllDuplicates(struct Node* head){
        Node* dummy = new Node(-1);
        dummy->next = head;
        Node* prev = dummy;
        Node* current = head;
        while (current != NULL){
            while (current->next != NULL && prev->next->data == current->next->data)
                current = current->next;
            if (prev->next == current)
                prev = prev->next;
            else
                prev->next = current->next;
            current = current->next;
            
        }
        head = dummy->next;
        return head;
        
    }
    
};