class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    int i=0,j=n-1;
    int area = INT_MIN;
    while(i<j)
    {
        int temp = min(height[i],height[j])*(j-i);
        area = max(area,temp);
        if(height[i]<height[j]) i++;
        else if(height[i]>height[j]) j--;
        else{ i++; j--;}
    }
    return area;
    }
};