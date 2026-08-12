class Solution {
    bool isanagram(string &s,string &t){
        if(s.size()!=t.size())return false;
        unordered_map<char,int> mp;
        for(char ch:s){mp[ch]++;}
        for(char ch:t){mp[ch]--;}
        for(char ch:s){
            if(mp[ch]!=0)return false;
        }
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;

        for(string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }

        for(auto &it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};
