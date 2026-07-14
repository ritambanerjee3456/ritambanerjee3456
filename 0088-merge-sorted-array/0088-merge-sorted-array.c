#include<stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int k;
    int* nums3 = (int*)malloc((m+n)*sizeof(int));
     k=0;
    int i,j;
        for(i=0,j=0;i<m&&j<n;){
            if(nums1[i]>=nums2[j]){
                nums3[k]=nums2[j];
                j++;
            }
            else if(nums1[i]<=nums2[j]){
                nums3[k]=nums1[i];
                i++;
            }
            k++;
        }
     while(i<m){
        nums3[k]=nums1[i];
        i++;
        k++;
     }
     while(j<n){
        nums3[k]=nums2[j];
        j++;
        k++;
     }
        
    for(i=0;i<m+n;i++){
        nums1[i]=nums3[i];
    }    
    return;
}