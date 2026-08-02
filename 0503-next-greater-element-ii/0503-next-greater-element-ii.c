int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* nums3 = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {

        nums3[i] = -1;  
        for (int j = 1; j < numsSize; j++) {

            int index = (i + j) % numsSize;

            if (nums[index] > nums[i]) {
                nums3[i] = nums[index];
                break;
            }
        }
    }

    return nums3;
}