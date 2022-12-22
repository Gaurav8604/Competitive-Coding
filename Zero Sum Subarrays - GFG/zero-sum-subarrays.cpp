//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
#define ll long long 

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        unordered_map<ll int,ll int>mp;
        ll int sum = 0, count = 0;
        mp[0] = 1;
        for(ll int i=0;i<n;i++) {
            sum += arr[i];
            if(mp.find(sum) != mp.end())
                count += mp[sum];
            mp[sum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends