int value(char s){
    switch(s){
         case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}
int romanToInt(char* s) {
    int i=0;
    int num =0;
    while(s[i]!='\0'){
         if(value(s[i])<value(s[i+1])){
            num = num - value(s[i]);
            i++;
         }
         else{
            num = num + value(s[i]);
            i++;
         }
    }
    return num;
}