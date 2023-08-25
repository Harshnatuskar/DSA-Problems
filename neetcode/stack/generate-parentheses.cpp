class Solution {
public:
    void generator(vector<string>& result , const string & current, int left , int right){
    	if (left == 0 && right == 0) {
            result.push_back(current);
            return;
        }

        if (left > 0) {
            generator(result, current + "(", left - 1, right);
        }

        if (right > left) {
            generator(result, current + ")", left, right - 1);
        }
    
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        generator(output,"",n,n);
        return output;
    }
};
