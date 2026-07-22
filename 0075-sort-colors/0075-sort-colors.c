void sortColors(int* a, int n) {
    int z,o,t;
    z=0;
    o=0;
    t=0;
    for(int i=0;i<n;i++){
                 if(a[i]==0){
                    z++;
                 }
                 else if(a[i]==1){
                    o++;
                 }
                 else t++;

    }
    int k=0;
    while(k<z){
               a[k]=0;
               k++;
    }
    k=0;
    while(k<o){
        a[k+z]=1;
        k++;

    }
    k=0;
    while(k<t){
        a[k+z+o]=2;
        k++;
    }

    return;
}