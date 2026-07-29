
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode* temp = head;
    int ct;
    ct=0;
    while(ct<k){
        if(temp==NULL){
            return head;
        }
        temp=temp->next;
        ct++;
    }
    ct=0;
    struct ListNode* prev = reverseKGroup(temp, k);
    temp=head;
    while(ct<k){
       struct ListNode* next = temp->next;
       temp->next = prev;
       prev = temp;
       temp = next;
       ct++;
    }

    return prev;
}