struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    int n = 0;
    struct ListNode *ptr = head;

    while (ptr != NULL) {
        n++;
        ptr = ptr->next;
    }

    if (n <= 1)
        return head;

    int ar[n];

    ptr = head;
    for (int i = 0; i < n; i++) {
        ar[i] = ptr->val;
        ptr = ptr->next;
    }

    int i = left - 1;
    int j = right - 1;

    while (i < j) {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }

    ptr = head;
    for (int i = 0; i < n; i++) {
        ptr->val = ar[i];
        ptr = ptr->next;
    }

    return head;
}