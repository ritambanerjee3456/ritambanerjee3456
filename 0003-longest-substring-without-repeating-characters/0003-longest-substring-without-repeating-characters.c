#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int l = strlen(s);

    if (l == 0)
        return 0;
    if (l == 1)
        return 1;

    int max = 0;

    for (int i = 0; i < l; i++) {
        int visited[256] = {0};
        int count = 0;

        for (int j = i; j < l; j++) {
            if (visited[s[j]]==1)
                break;

            visited[s[j]] = 1;
            count++;
        }

        if (count > max)
            max = count;
    }

    return max;
}
