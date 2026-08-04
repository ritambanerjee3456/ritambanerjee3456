int largestRectangleArea(int* heights, int heightsSize) {
    int* stack = (int*)malloc(heightsSize*sizeof(int));
    if(heightsSize == 1) return (heights[0]);
    int top = -1;
    int c =0;
    int right[heightsSize];
    int left[heightsSize];
    for(int i=0;i<heightsSize;i++){
        while(top!= -1 && heights[stack[top]]>=heights[i]){
            top--;
       }
        if(top == -1) right[i] =-1;
       else right[i] = stack[top];
        stack[++top] = i;
      
    }
    top = -1;
     for(int i=heightsSize-1;i>=0;i--){
        while(top!=-1 && heights[stack[top]]>=heights[i]){
            top--;
       }
        if(top == -1) left[i] = heightsSize;
       else left[i] = stack[top];
        stack[++top] = i;
      
    }


    int max =0;
    long long int area =0;
    for(int i=0;i<heightsSize;i++){
        area = heights[i] * (left[i]-right[i]-1);
        if(max<area) max = area;

    }

    return max;
}