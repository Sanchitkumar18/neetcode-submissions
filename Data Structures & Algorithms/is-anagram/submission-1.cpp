class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> freq1;
        if(s.size()!=t.size())return false;
        for(char ch:s){
            freq1[ch]++;
        }
        for(char ch:t){
            freq1[ch]--;
        }
        for(char ch:s){
            if(freq1[ch]!=0) return false;
        }
        return true;
    }
};
