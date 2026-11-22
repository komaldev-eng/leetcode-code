class Solution {
public:


    bool solve(vector<vector<char>>& board, string word,int i,int j,int idx){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()|| board[i][j]!=word.at(idx) || board[i][j]=='*'){
            return false;
        }
        if(board[i][j]==word.at(idx)){
            idx++;
        }
        if(idx == word.size()){
            return true;
        }
        char temp = board[i][j];
        board[i][j] = '*';

        bool u = solve(board,word,i-1,j,idx);
        bool d = solve(board,word,i+1,j,idx);
        bool l = solve(board,word,i,j-1,idx);
        bool r = solve(board,word,i,j+1,idx);

        board[i][j] = temp;
        return u||d||l||r;


    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    bool ans = solve(board,word,i,j,0);
                    if(ans){
                        return true;
                    }
                }
            }

        }
        return false;
    }
};