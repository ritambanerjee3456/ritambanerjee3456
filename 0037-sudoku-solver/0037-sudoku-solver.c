int isSafe(char digit,int row, int col, char** board){
    for(int i=0;i<9;i++){
        if(board[i][col] == digit) return 0;
    }
    for(int i=0;i<9;i++){
        if(board[row][i] == digit) return 0;
    }
    int start = (row/3)*3;
    int end = (col/3)*3;
    for(int i=start;i<=start+2;i++){
        for(int j=end;j<=end+2;j++){
            if(board[i][j] == digit) return 0;
        }
    }
    return 1;
}
bool helper(char** board,int row,int col){
    int nextRow, nextCol;
     nextRow = row;
     nextCol = col+1;
     if(nextRow == 9) return true;
    if(nextCol== 9 ){
         nextRow = nextRow+1;
         nextCol = 0;
    }
    if(board[row][col] != '.'){
        return helper(board,nextRow,nextCol);
    }
    for(char i = '1';i<='9';i++){
          if(isSafe(i,row,col,board)==1){
            board[row][col] = i;
            if(helper(board,nextRow,nextCol) == true) return true;
            board[row][col] = '.';  
         }    
    }
   return false; 
}
void solveSudoku(char** board, int boardSize, int* boardColSize) {
    helper(board,0,0);
}