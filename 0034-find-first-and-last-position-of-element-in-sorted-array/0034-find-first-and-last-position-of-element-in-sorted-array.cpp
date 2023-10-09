class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> ans(2,-1);
          int firstindex =-1;
          int lastindex = -1;
          int start = 0;
          int end = nums.size()-1;
         
          while(start<=end){
               int mid = (start+end)/2;
               if(nums[mid]==target){
                   firstindex = mid;
                   end = mid -1;
               }
               else if(nums[mid] > target){
                   end = mid-1;
               }
               else{
                   start = mid+1;
               }
          }

           start = 0;
           end = nums.size()-1;
         
          while(start<=end){
               int mid = (start+end)/2;
               if(nums[mid]==target){
                   lastindex = mid;
                   start = mid+1;
               }
               else if(nums[mid] > target){
                   end = mid-1;
               }
               else{
                   start = mid+1;
               }
          }
          ans[0] = firstindex;
          ans[1] = lastindex;

    return ans;
    }
};