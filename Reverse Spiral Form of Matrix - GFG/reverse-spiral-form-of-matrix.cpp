//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int m, int n, vector<vector<int>>&a)  {
        int k=0,l=0,i=0;
        vector<int> ans(0);
        while (k < m && l < n) 
        {
            for (i = l; i < n; ++i) 
                ans.push_back(a[k][i]);
            k++;
            for (i = k; i < m; ++i) 
                ans.push_back(a[i][n-1]);
            n--;
            if (k < m) 
            {
                for (i = n - 1; i >= l; --i) 
                    ans.push_back(a[m-1][i]);
                m--;
            }
            if (l < n) 
            {
                for (i = m - 1; i >= k; --i)
                    ans.push_back(a[i][l]);
                l++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends