class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> max_left(n), max_right(n);
        
        int left = 0;
        int right = 0;
        int trapped = 0;
         
        for (int i = 0; i < n; i++) {
            max_left[i] = left;
            left = max(left, height[i]);
        }
         
        for (int i = n - 1; i >= 0; i--) {
            max_right[i] = right;
            right = max(right, height[i]);
        }
         
        for (int i = 0; i < n; i++) {
            int min_height = min(max_left[i], max_right[i]);
            if (min_height > height[i]) {
                trapped += min_height - height[i];
            }
        }
        
        return trapped;
    }
};

