//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
        vector<vector<int>> mtx;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            temp.push_back(a[i]);
            else if(!temp.empty())
            {
                mtx.push_back(temp);
                temp.clear();
            }
        }
        if(!temp.empty()) mtx.push_back(temp);
        int maxs=0,x=0;
        for(int i=0;i<mtx.size();i++)
        {
            maxs=max(maxs,accumulate(mtx[i].begin(),mtx[i].end(),0));
            if(accumulate(mtx[i].begin(),mtx[i].end(),0)==maxs)
            x=i;
        }
        if(mtx.empty()) return {-1};
        return mtx[x];
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends