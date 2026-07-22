void nextPermutation(int* a, int n) {
    int pivot,f;
    int c=0;
    for(int i=n-1;i>0;i--){
        if(a[i-1]<a[i]){
            pivot = i-1;
            c=1;
            break;
        }
    }
    if(c==0){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    int temp= a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        return ;
    }
    else{
    for(int i=n-1;i>0;i--){
        if(a[pivot]<a[i]){
         f=i;
            break;
        }
    }
    int temp=a[pivot];
    a[pivot]=a[f];
    a[f]=temp;
    int i,j;
    for(i=pivot+1,j=n-1;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }

    return ;
}