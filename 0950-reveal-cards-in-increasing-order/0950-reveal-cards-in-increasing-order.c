typedef struct{
    int fr;
    int rr;
    int* val;
}Queue;

Queue* Create(){
    Queue* obj = (Queue*)malloc(sizeof(Queue));
    obj->fr = -1;
    obj->rr = -1;
    obj->val = (int*)malloc(1000*sizeof(int));
    return obj;
}

int* Rotate(int* a, int start, int end){
    int temp = a[start];
    while(start < end){
        a[start] = a[start+1];
        start++;
    }
    a[end] = temp;
    return a;
}
int cmp(const void*a, const void*b){
    return (*(int*)a - *(int*)b);
}

int* deckRevealedIncreasing(int* deck, int deckSize, int* returnSize) {
    *returnSize = deckSize;
   Queue* Q = Create();
   for(int i=0;i<deckSize;i++){
    Q->rr ++;
    Q->val[Q->rr] = i;
   }
   Q->fr = 0;
   int* ar = malloc(deckSize*sizeof(int));
   qsort(deck,deckSize,sizeof(int),cmp);
   int i=0;
   while(Q->fr <= Q->rr) {
        ar[Q->val[Q->fr]] = deck[i];
        i++;
        Q->fr++;
        if(Q->fr <= Q->rr)
        Rotate(Q->val,Q->fr,Q->rr);
   }
   return ar;
}