int singleNonDuplicate(int* nums, int n) {
    int x = nums[0];
    for(int i=1;i<n;i++){
            x = x^nums[i];
    }
    return x;
}