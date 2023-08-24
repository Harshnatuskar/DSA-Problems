class Solution {
public:
    bool isAnagram(string s, string t) { 
        if(s.length()!=t.length()){return false;}
        unordered_map<char,int> count;
        for(char c:s){
            count[c]++; 
        }
        for(char c:t){
            if(count.find(c)==count.end()|| count[c]==0){
                return false;
            } 
            count[c]--;
        } 
        return true;
    }
};


//alt answer
/*bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){return false;}
        unordered_map<char,int> count;
        for(auto x:s){
            count[x]++; //counts the freq of characters in s
        }
        for(auto x:t){
            count[x]--;//decrement freq of characters in t
        }
        for(auto x: count){
            if((x.second!=0)){return false;}//checking for a non 0 freq
        }
        return true;
    } */
