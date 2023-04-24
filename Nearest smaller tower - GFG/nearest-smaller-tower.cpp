//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n=arr.size();
        stack<pair<int,int>> s1,s2;
        vector<int> r(n,-1),l(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!s1.empty())
            {
                if(s1.top().first<arr[i])
                {
                    r[i]=s1.top().second;
                    break;
                }
                s1.pop();
            }
            s1.push({arr[i],i});
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty())
            {
                if(s2.top().first<arr[i])
                {
                    if(r[i]==-1 || s2.top().second-i<i-r[i]) l[i]=s2.top().second;
                    else if(s2.top().second-i>i-r[i]) l[i]=r[i];
                    else
                    {
                        if(arr[s2.top().second]<arr[r[i]]) l[i]=s2.top().second;
                        else l[i]=r[i];
                    }
                    break;
                }
                s2.pop();
            }
            if(l[i]==-1) l[i]=r[i];
            s2.push({arr[i],i});
        }
        return l;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends