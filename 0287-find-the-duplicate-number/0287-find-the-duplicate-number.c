int findDuplicate(int* nums, int numsSize) {
    int visited[100001] = {0};

    for(int i = 0; i < numsSize; i++) {
        if(visited[nums[i]])
            return nums[i];

        visited[nums[i]] = 1;
    }

    return -1;
}
