bool backspaceCompare(char* s, char* t) {
    char* stack = (char*)malloc(strlen(s)*sizeof(char));
    char* stack2 = (char*)malloc(strlen(t)*sizeof(char));
    int top = -1;
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='#'){
            top++;
            stack[top]=s[i];
    }
    else{
        if(top != -1)
        top--;
    }
    }
    int top2;
    top2 = -1;
    for(int i=0;i<strlen(t);i++){
        if(t[i]!='#'){
            top2++;
            stack2[top2]=t[i];
    }
    else{
         if(top2 != -1)
        top2--;
    }
    }
    if(top != top2){
        return false;
    }
    for(int i=0;i<=top;i++){
        if(stack[i]!=stack2[i]) return false;
    }

    return true;


}