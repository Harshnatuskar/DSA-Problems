class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num != '.') {
                    string row = "row_" + to_string(i) + "_" + num;
                    string col = "col_" + to_string(j) + "_" + num;
                    string box = "box_" + to_string(i / 3) + "_" + to_string(j / 3) + "_" + num;
                    
                    if (seen.find(row) != seen.end() || seen.find(col) != seen.end() || seen.find(box) != seen.end()) {
                        return false;
                    }

                    seen.insert(row);
                    seen.insert(col);
                    seen.insert(box);
                }
            }
        }
        
        return true; 
    }
};

