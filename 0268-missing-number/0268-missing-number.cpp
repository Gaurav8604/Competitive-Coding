class Solution {
public:
    int missingNumber(vector<int>& nums) {
        priority_queue<int> pq;
        int s=nums.size();
        for(int i=0;i<s;i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            if(pq.top()==s){
                pq.pop();
                s--;
            }
            else{
                return s;
            }
        }
        return 0;
    }
};