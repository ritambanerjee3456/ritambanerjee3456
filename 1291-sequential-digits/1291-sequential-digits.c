#include <stdio.h>
#include <stdlib.h>

int* sequentialDigits(int low, int high, int* returnSize) {
    int *ans = (int*)malloc(100 * sizeof(int));
    int count = 0;

    for (int len = 2; len <= 9; len++) {
        for (int start = 1; start + len -1 <= 9; start++) {
            int num = 0;
            for (int d = start; d < start + len; d++) {
                num = num * 10 + d;
            }
            if (num >= low && num <= high) {
                ans[count++] = num;
            }
        }
    }

    *returnSize = count;
    return ans;
}
