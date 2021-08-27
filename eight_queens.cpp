#include<bits/stdc++.h>
#define N 8
using namespace std;

void printSolution(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout << board[i][j] << " ";
        cout << '\n';
    }

}

bool issafe(int board[N][N] , int row , int col){
    for(int i=0;i<col;i++){
        if(board[row][i])
            return false;
    }

    for(int i=row , j=col ; i>=0 && j>=0;i-- , j-- ){
        if (board[i][j])
            return false;
    }

    for(int i=row , j=col; i<N && j >=0 ; i++ , j--){
        if (board[i][j])
            return false;
    }

    return true;
}

bool solveNQUtil(int board[N][N] , int col){
    if (col >=N)
        return true;
    
    for(int i=0;i<N;i++){
        if (issafe(board , i , col)){
            // cout << "i : " << i << " col : " << col << endl;
            board[i][col] = 1;

            if (solveNQUtil(board , col+1))
                return true;

            board[i][col]=0;
        }
    }

    return false;
}

void solveNQ(){
    int board[N][N];
    memset(board , 0 , sizeof(board));

    if (solveNQUtil(board , 0)==false){
        cout << "Solution Does Not Exist" << endl;
        return;
    }

    printSolution(board);
}

int main(){
    solveNQ();
    return 0;
}