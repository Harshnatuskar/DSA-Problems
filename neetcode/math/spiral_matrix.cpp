//54. spiral matrix
//Given an m x n matrix, return all elements of the matrix in spiral order.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        if (matrix.empty()) {
            return ans; // Return an empty vector if the matrix is empty
        }
        
        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        
        while (top <= bottom && left <= right) {
            // Traverse top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            
            // Traverse right column
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                // Traverse bottom row
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                // Traverse left column
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    }
};


int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);
    
    // Print the elements in spiral order
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}