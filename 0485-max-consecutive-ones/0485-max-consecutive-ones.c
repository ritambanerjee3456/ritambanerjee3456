typedef struct{
     int top;
     int* val;
}Stack;

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0;
    Stack* ob = malloc(sizeof(Stack));
    ob->top = 0;
    int i=0;

    while(i<numsSize){
        while(i<numsSize && nums[i]!=0){
          ob->top++;
          i++;
        }
        if(max< ob->top) max = ob->top;
       if(i<numsSize && nums[i]==0) {
           ob->top = 0;
           i++;
       }
    }
  
  return max;
}