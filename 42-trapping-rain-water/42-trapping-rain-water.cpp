class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        int leftn[n],rightn[n];
        leftn[0]=height[0];
        rightn[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            leftn[i]=max(height[i],leftn[i-1]);
        for(int i=n-2;i>=0;i--)
            rightn[i]=max(height[i],rightn[i+1]);
        for(int i=0;i<n;i++)
            ans+=min(leftn[i],rightn[i])-height[i];
        return ans;
    }
};