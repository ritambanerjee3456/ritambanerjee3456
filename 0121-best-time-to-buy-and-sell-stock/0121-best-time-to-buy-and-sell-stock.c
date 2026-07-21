int maxProfit(int* a, int n) {
int bb=a[0];
int max = 0;
int diff;
for(int i=0;i<n;i++){
    if(a[i]>bb){
        diff = a[i] - bb;
        if(diff>max){
            max = diff;
        }
    }
    if(bb>a[i]){
        bb=a[i];
    }
}
if(max == 0)
return 0;
else return max;
}