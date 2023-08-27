class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        
        stack<int> temp;
        vector<int> answer(n,0);
        
        for(int i = 0;i < n; ++i){
        	while(!temp.empty() && temperatures[i] > temperatures[temp.top()]){
        		int j= temp.top();
        		temp.pop();
        		answer[j]= i - j;
        	}
        	temp.push(i);
        }
        return answer;
        }
        
};
