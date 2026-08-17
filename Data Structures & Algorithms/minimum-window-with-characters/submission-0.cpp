class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()) return "";
        int count=0;
        int minlen=INT_MAX;
        int left=0;
        int start=0;
        map<char,int> need;
        for(char ch:t){
            need[ch]++;
        }
        for(int right=0;right<s.size();right++){
            if(need[s[right]]>0){
                count++;
            }
            need[s[right]]--;
            while(count==t.size()){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                need[s[left]]++;
                if(need[s[left]]>0){
                    count--;
                }
                left++;
            }
        }
        if(minlen==INT_MAX)return "";
        return s.substr(start,minlen);
    }
};
