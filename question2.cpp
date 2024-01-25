#include <iostream>
using namespace std;


bool issafe(vector<vector<char>>& board, int row, int col, int num){
    for(int i=0;i<9;i=i+1){
        if(board[row][i]==num || board[i][col]==num){
            return false;
        }
    }
    int startrow=3*(row/3);
     int colrow=3*(col/3);

    for(int i=0;i<3;i=i+1){
       for(int j=0;j<3;j=j+1){
        if(board[startrow+i][colrow+j]==num){
            return false;
        }
       } 
    }
    return true;
}
bool solve(vector<vector<char>>& board){
    for(int row=0;row<9;row=row+1){
        for(int col=0;col<9;col=col+1){
            if(board[row][col]=='.'){
                for(char num= '1';num<=9;num=num+1){
                    if(issafe(board,row,col,num)){
                        board[row][col]=num;

                        if(solve(board)){
                            return true;
                        }
                        board[row][col]='.';
                    }
                }
                return false;
    
            }
        }
    }
    return true;
}