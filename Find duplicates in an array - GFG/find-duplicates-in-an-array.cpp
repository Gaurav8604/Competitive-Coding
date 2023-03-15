//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int a[], int n) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second>1) ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        vector<int> temp{-1};
        return ans.size()==0?temp:ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends