class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int low=i+1;
            int high=n-1;
            vector<int> ans(3);
            while(low<high){
                int sum=nums[low]+nums[high];
                if(sum+nums[i]==0){
                    res.push_back({nums[i],nums[low],nums[high]});
                    high--;
                    low++;
                    while(low<high && nums[low]==nums[low-1]){
                        low++;
                    }
                    while(low<high && nums[high]==nums[high+1]){
                        high--;
                    }
                }
                
                else if(sum+nums[i]>0){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return res;
    }
};
