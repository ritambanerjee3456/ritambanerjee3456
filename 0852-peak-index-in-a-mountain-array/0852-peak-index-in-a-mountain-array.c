int peakIndexInMountainArray(int* a, int n) {
    int max = 0;
    for(int i=0;i<n;i++){
        if(a[i]>a[max]){
            max = i;
        }
    }
    return max;
}