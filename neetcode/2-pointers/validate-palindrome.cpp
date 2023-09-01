class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left<right){
            if(!isalnum(s[left])){ left++; }
            else if(!isalnum(s[right])){ right--;}
            else if(tolower(s[left])!=tolower(s[right])){ return false;}
            else{ left++; right--;}
        }
        return true;
    }
};

/*class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else if (tolower(s[left]) != tolower(s[right])) {
                return false;
            } else {
                left++;
                right--;
            }
        }
        
        return true;
    }
};*/



/*class Solution {
public:
    bool isPalindrome(string s) {
        string a ;
        for(char c : s){
            if(isalnum(c)){
                a.push_back(tolower(c));
            }
        }
        string cleaned=a;
        string reversed = cleaned;
        reverse(reversed.begin(),reversed.end());
        return cleaned== reversed;
    }
};
*/
