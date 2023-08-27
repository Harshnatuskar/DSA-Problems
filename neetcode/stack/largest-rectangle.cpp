class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<int> stack;
        int n = heights.size();
        
        for(int i = 0; i < n ; ++i){
        	while(!stack.empty()  && heights[i] < heights[stack.top()]){
        		int top = stack.top();
        		stack.pop();
        		
        		int width = i;
        		if(!stack.empty()){
        			width = i - stack.top() -1;
        		}
        		
        		int area = heights[top] * width;
        		
        		maxArea = max(maxArea,area);
        	}
        	stack.push(i);
        }
        
        while(!stack.empty()){
        	int top = stack.top();
        	stack.pop();
        	
        	int width = n;
        	if(!stack.empty()){
        		width = n - stack.top() - 1;
        	}
        	
        	int area = heights[top] * width;
        	
        	maxArea = max(maxArea,area);
        }
        
        return maxArea;
    }
};
