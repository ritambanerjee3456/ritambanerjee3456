bool find132pattern(int* nums, int numsSize) {
    int* stack = malloc(numsSize * sizeof(int));
    int top = -1;

    int second = INT_MIN;

    for(int i = numsSize - 1; i >= 0; i--) {

        // nums[i] is the "1"
        if(nums[i] < second) {
            free(stack);
            return true;
        }

        // Find the largest possible "2" smaller than nums[i]
        while(top >= 0 && nums[i] > stack[top]) {
            second = stack[top];
            top--;
        }

        stack[++top] = nums[i];
    }

    free(stack);
    return false;
}