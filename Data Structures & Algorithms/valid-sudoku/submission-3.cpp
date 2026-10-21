class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> dup;
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                string c =string(1,board[i][j]);
                if(c == ".") continue;
                string rs = "found"+ c+"row"+to_string(i);
                string cs = "found"+ c+"col"+to_string(j);
                string bs = "found"+ c+"box"+to_string(i/3)+to_string(j/3);
                if(dup.find(rs) != dup.end() ||dup.find(cs) != dup.end()||dup.find(bs) != dup.end()) return false;
                dup.insert(rs);
                dup.insert(cs);
                dup.insert(bs);
            }
        }
        return true;
    }
};
