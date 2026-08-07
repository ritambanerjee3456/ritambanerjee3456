#include <stdlib.h>

typedef struct {
    int top;
    int *val;
    int *ans;
} StockSpanner;

StockSpanner* stockSpannerCreate() {
    StockSpanner* obj = (StockSpanner*)malloc(sizeof(StockSpanner));

    obj->top = -1;
    obj->val = (int*)malloc(10000 * sizeof(int));
    obj->ans = (int*)malloc(10000 * sizeof(int));

    return obj;
}

int stockSpannerNext(StockSpanner* obj, int price) {

    obj->val[++obj->top] = price;

    int count = 1;

    for (int p = obj->top - 1; p >= 0; p--) {
        if (obj->val[p] <= price)
            count++;
        else
            break;
    }

    obj->ans[obj->top] = count;

    return count;
}

void stockSpannerFree(StockSpanner* obj) {
    free(obj->val);
    free(obj->ans);
    free(obj);
}