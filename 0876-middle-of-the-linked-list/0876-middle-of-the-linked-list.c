
struct ListNode* middleNode(struct ListNode* head) {
   struct ListNode* Slow;
   struct ListNode* Fast;
   Fast = head;
   Slow = head;
   while( Fast !=NULL && Fast->next != NULL  ){
    Slow= Slow->next;
    Fast = Fast->next->next;
   }
   return Slow;
}