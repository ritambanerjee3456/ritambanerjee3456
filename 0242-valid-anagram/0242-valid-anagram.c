#include<string.h>

int compare(const void*a, const void*b){
    return(*(char*)a - *(char*)b);
}
int max(int a , int b){
    if(a>b){
        return a;
    }
    return b;
}

bool isAnagram(char* s, char* t) {
    qsort(s , strlen(s), sizeof(char),compare);
    qsort(t, strlen(t),sizeof(char),compare);
    int l,n;
    int x = max(strlen(s),strlen(t));
    for(l=0; l<x; l++){
        if(s[l]!=t[l]){
            return false;
            break;
        }
    }
    return true;
}