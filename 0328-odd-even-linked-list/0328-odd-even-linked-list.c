struct ListNode* oddEvenList(struct ListNode* head) {

    if (head == NULL || head->next == NULL)
        return head;
        int n=0;
        struct ListNode* temp = head;
    while (temp != NULL) {
    n++;
    temp = temp->next;
}    

    int *ar = (int *)malloc(n * sizeof(int)); 
    int *br = (int *)malloc(n * sizeof(int)); 

    int i = 0, j = 0;
    struct ListNode *ptr = head;
    int pos = 1;
    while (ptr != NULL) {
        if (pos % 2 == 1)
            br[j++] = ptr->val;
        else
            ar[i++] = ptr->val;

        ptr = ptr->next;
        pos++;
    }
    ptr = head;
    for (int k = 0; k < j; k++) {
        ptr->val = br[k];
        ptr = ptr->next;
    }
    for (int k = 0; k < i; k++) {
        ptr->val = ar[k];
        ptr = ptr->next;
    }

    free(ar);
    free(br);

    return head;
}