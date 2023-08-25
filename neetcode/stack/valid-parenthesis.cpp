class Solution {
public:
    bool isValid(string s) {
        stack<char> symbolStack;
        unordered_map<char, char> pairs = {{')','('},{'}','{'},{']','['}};
        
        for(char c:s){
        	if(pairs.find(c)!=pairs.end()){
        		if(symbolStack.top() != pairs[c] || symbolStack.empty()){
        			return false;
        		}
        		symbolStack.pop();
        	}else{
        		symbolStack.push(c);
        	}
        }
        
        return true;
    }
};

// 1. open brackets must be closed by the same type of brackets
//2. Open brackets must be in correct order
//3. EVery close bracket has a correspoding open bracket of hte same type
