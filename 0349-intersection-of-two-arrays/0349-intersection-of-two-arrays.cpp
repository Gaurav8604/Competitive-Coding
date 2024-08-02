class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        unordered_map<int,int> mp;
        for(int x:nums1)
        {
            mp[x]=1;
        }
        for(int x:nums2)
        {
            s.insert(x);
        }
        for(int x:s)
        {
            mp[x]++;
        }
        vector<int> ans;
        for(auto x:mp)
        {
            if(x.second>1)
            ans.push_back(x.first);
        }
        return ans;
    }
};