class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {   
        for(int i=0; i<board.size(); i++){
            map<char, int>mp;
            for(int j=0; j<board[i].size(); j++){
                if (board[i][j] != '.'){
                    mp[board[i][j]]++;
                    if(mp[board[i][j]] >= 2){
                        return false;
                    }
                }
            }
        }
        
        for(int i=0; i<board.size(); i++){
            map<char, int>mp;
            for(int j=0; j<board[i].size(); j++){
                if (board[j][i] != '.'){
                    mp[board[j][i]]++;
                    if(mp[board[j][i]] >= 2){
                        return false;
                    }
                }
            }
        }
        
        for (int block = 0; block < 9; block++) {
            map<char, int>mp;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char current = board[(block / 3) * 3 + i][(block % 3) * 3 + j];
                    if (current != '.') {
                        mp[current]++;
                        if (mp[current] >= 2) {
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};