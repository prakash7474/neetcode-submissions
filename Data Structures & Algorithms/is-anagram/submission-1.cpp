class Solution {
public:
    bool isAnagram(string s, string t) {
        for(char ch:s){
           size_t pos=t.find(ch);
           if(pos==string::npos){
            return false;
           } 
            t.erase(pos,1);
        }
        return true;
    }
};
