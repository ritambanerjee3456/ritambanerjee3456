struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int ct = 0;
    struct ListNode* ptr = head;
    while (ptr != NULL) {
        ct++;
        ptr = ptr->next;
    }

    if (n == ct) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    ptr = head;

    for (int i = 0; i < ct - n - 1; i++) {
        ptr = ptr->next;
    }
    struct ListNode* sec = ptr->next;
    ptr->next = sec->next;
    sec->next = NULL;
    free(sec);

    return head;
}