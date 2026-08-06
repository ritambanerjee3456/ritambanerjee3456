int* sortParity(int* nums, int start, int end) {

    if (start % 2 == 0) {
        // Descending for even indices
        for (int pass = start; pass + 2 < end; pass += 2) {
            for (int i = start; i + 2 < end; i += 2) {
                if (nums[i] > nums[i + 2]) {
                    int temp = nums[i];
                    nums[i] = nums[i + 2];
                    nums[i + 2] = temp;
                }
            }
        }
    } else {
        // Ascending for odd indices
        for (int pass = start; pass + 2 < end; pass += 2) {
            for (int i = start; i + 2 < end; i += 2) {
                if (nums[i] < nums[i + 2]) {
                    int temp = nums[i];
                    nums[i] = nums[i + 2];
                    nums[i + 2] = temp;
                }
            }
        }
    }

    return nums;
}

int* sortEvenOdd(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    if (numsSize <= 2)
        return nums;

    sortParity(nums, 0, numsSize);
    sortParity(nums, 1, numsSize);

    return nums;
}