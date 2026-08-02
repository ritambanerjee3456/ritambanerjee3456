bool isValid(char* s) {
    char* stack = (char*)malloc(strlen(s)*sizeof(char));
    int top = -1;
    for(int i=0;i<strlen(s);i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            top ++;
            stack[top] = s[i];
        }
        else {
            if(top == -1)  {
                return false;
            }
             
            if(stack[top] ==  '(' && s[i] != ')'){
                return false;
            }
             if(stack[top] ==  '[' && s[i] != ']'){
                return false;
            }
             if(stack[top] ==  '{' && s[i] != '}'){
                return false;
            }
            
           
            top --;   
        }

    }
    if(top == -1){
        return true;
    }
    else return false;
}