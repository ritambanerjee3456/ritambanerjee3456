char lowbound(char ch){
    if(ch>='a' && ch<= 'z') return ch;
    else{
        int g = ch - 'A';
        ch = g + 'a';
    }
    return ch;
}



char* makeGood(char* s) {
    char* stack = malloc((strlen(s)+2)*sizeof(char));
    int top = -1;
    for(int i=0;i<strlen(s);i++){
            if(top != -1 && lowbound(stack[top])==lowbound(s[i]) && stack[top] != s[i]){
                top--;
            }
        else{
        stack[++top] = s[i];
        }
    }
    stack[top+1] ='\0';
    return stack;
}