#include <stdio.h>
#include <string.h>

void helper(char *s, int i, char *ans, int *k) {
    // Skip spaces
    while (s[i] == ' ')
        i++;

    // End of string
    if (s[i] == '\0')
        return;

    int start = i;

    // Find end of current word
    while (s[i] != ' ' && s[i] != '\0')
        i++;

    int end = i;

    // Process remaining words first
    helper(s, i, ans, k);

    // Add space if answer already has words
    if (*k != 0)
        ans[(*k)++] = ' ';

    // Copy current word
    while (start < end)
        ans[(*k)++] = s[start++];
}

char* reverseWords(char* s) {
    static char ans[10001];
    int k = 0;

    helper(s, 0, ans, &k);

    ans[k] = '\0';

    return ans;
}
