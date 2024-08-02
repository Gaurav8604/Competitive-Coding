class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1,mp2;
        for(int x:nums1)
        {
            mp1[x]++;
        }
        for(int x:nums2)
        {
            mp2[x]++;
        }
        vector<int> ans;
        for(auto x:mp1)
        {
            if(mp2[x.first]>0)
            {
                int temp=min(mp2[x.first],x.second);
                while(temp--)
                {
                    ans.push_back(x.first);
                }
                mp2[x.first]=0;
                mp1[x.first]=0;
            }
        }
        for(auto x:mp2)
        {
            if(mp1[x.first]>0)
            {
                int temp=min(mp1[x.first],x.second);
                while(temp--)
                {
                    ans.push_back(x.first);
                }
                mp2[x.first]=0;
                mp1[x.first]=0;
            }
        }
        return ans;
    }
};