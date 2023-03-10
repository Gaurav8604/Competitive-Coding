//{ Driver Code Starts
//Initial Template for CPP

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
# define ll long long
class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	priority_queue<ll> pqmax;
    	priority_queue<ll,vector<ll>,greater<ll>> pqmin;
    	
    	for(int i=0;i<n;i++)
    	{
    	    pqmax.push(arr[i]);
    	    pqmin.push(arr[i]);
    	}
    	ll max1=pqmax.top();
    	pqmax.pop();
    	ll max2=pqmax.top();
    	pqmax.pop();
    	ll max3=pqmax.top();
    	pqmax.pop();
    	ll min1=pqmin.top();
    	pqmin.pop();
    	ll min2=pqmin.top();
    	pqmin.pop();
    	return max(max1*max2*max3,min1*min2*max1);
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n; long long arr[n];
	    for(i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    cout <<ob.maxTripletProduct(arr, n);
	    cout<<"\n";
	}
    return 0;
}
// } Driver Code Ends