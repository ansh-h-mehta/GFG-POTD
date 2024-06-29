bool solve(struct Node *head1, struct Node *head2){
    if(head1 == NULL && head2 != NULL ||(head2 == NULL && head1 != NULL)){
        return false;
    }
    if(head1 == NULL && head2 == NULL){
        return true;
    }
    bool ans = solve( head1 -> next , head2 -> next);
    
    return ((ans) && (head1 -> data == head2 -> data));
}

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code 
    return solve(head1,head2);
}