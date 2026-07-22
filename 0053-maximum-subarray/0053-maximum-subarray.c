int maxSubArray(int* nj, int n) {
    int cs=0;
    int mx=-66666666;
    for(int i=0;i<n;i++){
             cs=cs+nj[i];
             if(cs>mx){
                mx=cs;
             }
             if(cs<0){
                cs=0;
             }
    }
    return mx;
}