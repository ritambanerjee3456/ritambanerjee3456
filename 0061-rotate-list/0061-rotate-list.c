struct ListNode* rotateRight(struct ListNode* head, int k) {

    if (head == NULL)
        return head;

    int l = 0;
    struct ListNode *temp = head;

    while (temp != NULL) {
        l++;
        temp = temp->next;
    }

    k = k % l;
    if (k == 0)
        return head;

    int *ar = malloc(l * sizeof(int));

    temp = head;
    for (int i = 0; i < l; i++) {
        ar[i] = temp->val;
        temp = temp->next;
    }

    while (k--) {
        int last = ar[l - 1];
        for (int i = l - 1; i > 0; i--)
            ar[i] = ar[i - 1];
        ar[0] = last;
    }

    temp = head;
    for (int i = 0; i < l; i++) {
        temp->val = ar[i];
        temp = temp->next;
    }

    free(ar);
    return head;
}