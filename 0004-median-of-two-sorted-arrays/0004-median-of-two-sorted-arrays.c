double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {

    int total = nums1Size + nums2Size;
    int ar[total];

    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j])
            ar[k++] = nums1[i++];
        else
            ar[k++] = nums2[j++];
    }

    // Copy remaining elements of nums1
    while (i < nums1Size)
        ar[k++] = nums1[i++];

    // Copy remaining elements of nums2
    while (j < nums2Size)
        ar[k++] = nums2[j++];

    // Find the median
    if (total % 2 == 0)
        return (ar[total / 2] + ar[total / 2 - 1]) / 2.0;
    else
        return ar[total / 2];
}
