
bool isPalindrome(struct ListNode* head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast->next->next;
        slow= slow->next;
    }
    struct ListNode* prev = NULL;
    struct ListNode* temp;
    while(slow != NULL){
       
               temp = slow->next;
                 slow->next = prev;
                 prev = slow;
                 slow=temp;
    }
    while(prev !=NULL){
        if(prev->val != head->val){
            return false;
        }
        prev =prev->next;
        head=head->next;
    }
    
        return true;
}
