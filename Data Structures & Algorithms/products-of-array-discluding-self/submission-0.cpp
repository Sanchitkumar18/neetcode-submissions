class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1,zero=0;
        vector<int> ans(nums.size());
        for(auto num:nums){
            if(num!=0){pro*=num;}
            else zero++;
        }
        if(zero>1){return vector<int>(nums.size(),0);}

        for(int i=0;i<nums.size();i++){
            if(zero>0){
                ans[i]=(nums[i]==0)?pro:0;
            }
            else{
                ans[i]=pro/nums[i];
            }
        }
        return ans;
    }
};
