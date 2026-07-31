int check(int freq[] , int freq2[]){
    for(int i =0;i<26;i++){
        if(freq[i]!=freq2[i]){
            return 0;
        }
    }
    return 1;
}




bool checkInclusion(char* s1, char* s2) {
    int freq[26]={0};
    int n = strlen(s1);
    int i=0;
    while( i< n ){
        freq[s1[i] - 'a']++;
        i++;
    }
    int m = strlen(s2);
    for(int i=0;i<m;i++){
        int indx = 0;
        int sii = i;
        int freq2[26] ={0};
        while(indx<n && sii<m){
              freq2[s2[sii]-'a']++;
              indx++;
              sii++;
        }
        if(check(freq,freq2) == 1) return true;
        
    }
  return false;  
}