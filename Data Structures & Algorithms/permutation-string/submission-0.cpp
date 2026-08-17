class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> m1,m2;
        int k=s1.size();
        for(char ch:s1){
            m1[ch]++;
        }
        for(int right=0;right<s2.size();right++){
            m2[s2[right]]++;
            if(right>=k){
                m2[s2[right-k]]--;
                if(m2[s2[right-k]]==0){
                    m2.erase(s2[right-k]);
                }
            }
            if(m1==m2) return true;
        }
        return false;
    }
};
