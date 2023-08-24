//73. set matrix zeros
//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include<bits/stdc++.h>
using namespace std;

 
class Solution {
public:
    void setZeros(vector<vector<int>>& matrix) { 
        set<int> r;
        set<int> c;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    r.insert(i);
                    c.insert(j);
                }
           }
       }
       
       for (int i = 0; i < rows; i++) {
           for (int j = 0; j < cols; j++) {
               if (r.count(i) || c.count(j)) {
                   matrix[i][j] = 0;
               }
           }
       }
    }

};


int main() {
    vector<vector<int>> matrix = {{1, 0, 3}, {4, 5, 0}, {7, 8, 9}};
    Solution sol;
    sol.setZeros(matrix);

    // Print the matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

