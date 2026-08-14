class Solution {
public:
    int trap(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int ans=0;
        int left=0;
        int right=0;
        while(low<high){
            if(height[low]<=height[high]){
                if(height[low]>=left){
                    left=height[low];
                }
                else{
                    ans+=left-height[low];
                }
                low++;
            }
            else{
                if(height[high]>=right){
                    right=height[high];
                }
                else{
                    ans+=right-height[high];
                }
                high--;
            }
        }
        return ans;
    }
};
