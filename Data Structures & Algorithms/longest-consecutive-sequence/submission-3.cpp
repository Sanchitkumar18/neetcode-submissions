class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int> st;
        int count=1;
        for(auto num:nums){
            if(st.count(num))continue;
            st.insert(num);
        }
        vector<int> res;
        for(auto it:st){
            res.push_back(it);
        }
        int ans=1;
        for(int i=0;i<res.size()-1;i++){
            if(res[i+1]==res[i]+1)count++;
            else{
                count=1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};
