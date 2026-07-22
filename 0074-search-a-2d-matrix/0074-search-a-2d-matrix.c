#include<stdbool.h>

bool searchMatrix(int** m, int n, int* c, int t) {
    
      for(int i=0;i<n;i++){
        for(int j=0;j<c[i];j++){
            if(m[i][j]==t){
                  return true;
                  break;
            }
        }
      }
      return false;;
}