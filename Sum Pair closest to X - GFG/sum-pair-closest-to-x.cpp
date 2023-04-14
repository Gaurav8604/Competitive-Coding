//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        int strt=0,end=arr.size()-1,sum=0,z;
        vector<pair<int,pair<int,int>>> vec;
        while(strt<end)
        {
            sum=arr[strt]+arr[end];
            vec.push_back({abs(x-sum),{strt,end}});
            if(sum<x) strt++;
            else if(sum>x) end--;
            else return {arr[strt],arr[end]};
        }
        sort(vec.begin(),vec.end());
        for(z=1;z<vec.size();z++)
        {
            if(vec[z-1].first!=vec[z].first) break;
        }
        // for(int i=0;i<vec.size();i++)
        // {
        //     cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<endl;
        // }
        
        return {arr[vec[z-1].second.first],arr[vec[z-1].second.second]};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends