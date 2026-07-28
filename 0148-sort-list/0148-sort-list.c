int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

struct ListNode* sortList(struct ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    int n = 0;
    struct ListNode *temp = head;

    while(temp)
    {
        n++;
        temp = temp->next;
    }

    int *arr = malloc(n * sizeof(int));

    temp = head;

    for(int i = 0; i < n; i++)
    {
        arr[i] = temp->val;
        temp = temp->next;
    }

    qsort(arr, n, sizeof(int), compare);

    temp = head;

    for(int i = 0; i < n; i++)
    {
        temp->val = arr[i];
        temp = temp->next;
    }

    return head;
}


