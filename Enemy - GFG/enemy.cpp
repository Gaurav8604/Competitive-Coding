//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int>row,col;
            row.push_back(0);
            col.push_back(0);
            for(auto x:enemy)
            {
                row.push_back(x[0]);
                col.push_back(x[1]);
            }
            row.push_back(n+1);
            col.push_back(m+1);
            sort(row.begin(),row.end());
            sort(col.begin(),col.end());
            int maxr=0,maxc=0;
            for(int i=0;i<col.size();i++)
            {
                maxr=max(maxr,row[i]-row[i-1]-1);
                maxc=max(maxc,col[i]-col[i-1]-1);
            }
            return maxr*maxc;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends