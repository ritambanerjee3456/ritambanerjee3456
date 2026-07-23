#include<stdbool.h>
#include<string.h>
#include<ctype.h>
bool isPalindrome(char* s) {
    int l=0;
    int n= strlen(s)-1;
    while(l<n){
        if(!isalnum(s[l])){
             l++;
             continue;
        }
        else if(!isalnum(s[n])) {
            n--;
            continue;
        }
        else if(tolower(s[n])!=tolower(s[l])){
                  return false;
                  break;
        }
        l++;
        n--;
    }
    return true;
}