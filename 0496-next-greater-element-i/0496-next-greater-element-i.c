
int* nextGreaterElement(int* nums1, int nums1Size,
                        int* nums2, int nums2Size,
                        int* returnSize) {

    int* nums3 = malloc(nums1Size * sizeof(int));

    *returnSize = nums1Size;

    for (int j = 0; j < nums1Size; j++) {

        int i = 0;

        // Find nums1[j] inside nums2
        while (nums2[i] != nums1[j]) {
            i++;
        }

        // Start looking after it
        i++;

        // Assume there is no greater element
        nums3[j] = -1;

        // Search for next greater element
        while (i < nums2Size) {

            if (nums2[i] > nums1[j]) {
                nums3[j] = nums2[i];
                break;
            }

            i++;
        }
    }

    return nums3;
}