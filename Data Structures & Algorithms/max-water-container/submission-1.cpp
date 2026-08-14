class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        int low=0;
        int high=n-1;
        while(low<high){
            int vol=(high-low)*min(heights[low],heights[high]);
            ans=max(ans,vol);
            if(heights[low]<heights[high])low++;
            else{
                high--;
            }
        }
        return ans;
    }
};
