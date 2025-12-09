/*The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.*/
#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<string> &board,int row,int col,int n){
    //horizontal
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }
    //vertical
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //left diagonal
    for(int i=row, j=col;i>=0&&j>=0 ; j--, i--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //right diagonal
    for(int i=row, j=col;i>=0&&j<n ; j++, i--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void nQueens(vector<string> &board,int row,int n,vector<vector<string>> &ans){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int j=0;j<n;j++){
        if(isSafe(board,row,j,n)){
            board[row][j]='Q';
            nQueens(board,row+1,n,ans);
            board[row][j]='.';
        }
    }

}



vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    nQueens(board,0,n,ans);
    return ans;
}












































