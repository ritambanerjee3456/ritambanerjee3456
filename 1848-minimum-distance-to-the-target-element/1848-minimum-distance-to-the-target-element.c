#include <stdlib.h>

int getMinDistance(int* nums, int numsSize, int target, int start) {
    int ans = numsSize;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            int dist = abs(i - start);
            if (dist < ans) {
                ans = dist;
            }
        }
    }

    return ans;
}