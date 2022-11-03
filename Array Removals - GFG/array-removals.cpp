//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removals(vector<int>& arr, int k){
        int s=0,e=0;
        sort(arr.begin(),arr.end());
        int l=-1;
        while(e<arr.size())
        {
            if(arr[e]-arr[s]<=k)
            {
                l=max(l,e-s+1);
                e++;
            }
            else s++;
        }
        return arr.size()-l;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends