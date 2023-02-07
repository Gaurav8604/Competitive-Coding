//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           int maxl=0,nc=0,prz=-1,fneg=-1;
           for(int i=0;i<n;i++)
           {
               if(arr[i]<0)
                {
                    nc++;
                    if(fneg==-1) fneg=i;
                }
                if(arr[i]==0)
                {
                    fneg=-1;
                    nc=0;
                    prz=i;
                }
                else
                {
                    if(nc%2==0)
                    maxl=max(maxl,i-prz);
                    else
                    maxl=max(maxl,i-fneg);
                }
           }
           return maxl;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends