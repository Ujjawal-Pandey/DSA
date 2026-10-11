class Solution {
public:
 bool issafe(int row,int col,vector<string> &board,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n,int &count){
        if(col==n){
            ans.push_back(board);
            count++;
            return ;
        }
        for(int i=0;i<n;i++){
            if(issafe(i,col,board,n)){
                board[i][col]='Q';
                solve(col+1,board,ans,n,count);
                board[i][col]='.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        int count=0;
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n,count);
        return count;
    }
    
};