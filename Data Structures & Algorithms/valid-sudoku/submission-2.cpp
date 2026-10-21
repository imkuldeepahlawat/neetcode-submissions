class Solution {
public:
    bool tvs(vector<vector<char>>& board,int sr,int er,int sc,int ec){
        unordered_set<char>dup;
        for(int i = sr;i<=er;i++){
         for(int j = sc;j<=ec;j++){
            
            char c = board[i][j];
            if(c =='.') continue;
            if(dup.find(c) != dup.end())return false;
            dup.insert(c);
        }   
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
    for(int row = 0;row<9;row++){
        unordered_set<char>dup;
        for(int col = 0;col<9;col++){
            char c = board[row][col];
            if(c =='.') continue;
            if(dup.find(c) != dup.end())return false;
            dup.insert(c);
        }
    }
    for(int col = 0;col<9;col++){
        unordered_set<char>dup;
        for(int row = 0;row<9;row++){
            char c = board[row][col];
            if(c =='.') continue;
            if(dup.find(c) != dup.end())return false;
            dup.insert(c);
        }
    }
    for(int sr = 0;sr<9;sr+=3){
        int er = sr+2;
        for(int sc = 0;sc<9;sc+=3){
            int ec = sc+2;
            if(!tvs(board,sr,er,sc,ec))return false;
        }
    }
    return true;   
    }
};
