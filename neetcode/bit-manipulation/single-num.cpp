class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int r  = 0;
        for (int num : nums) {//XORing cancels out duplicates
            r  ^= num;
        }
        return r ;
    }
};
