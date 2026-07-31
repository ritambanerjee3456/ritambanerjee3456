int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {

    int arr[10000];
    int count = 0;

    // Put all values into array
    for (int i = 0; i < listsSize; i++) {

        struct ListNode *temp = lists[i];

        while (temp != NULL) {
            arr[count] = temp->val;
            count++;
            temp = temp->next;
        }
    }

    // Sort array
    qsort(arr, count, sizeof(int), compare);

    // Create linked list
    struct ListNode *head = NULL;
    struct ListNode *ptr = NULL;

    for (int i = 0; i < count; i++) {

        struct ListNode *newNode =
            (struct ListNode *)malloc(sizeof(struct ListNode));

        newNode->val = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            ptr = newNode;
        }
        else {
            ptr->next = newNode;
            ptr = newNode;
        }
    }

    return head;
}