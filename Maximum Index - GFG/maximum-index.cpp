//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        vector<int> minv,maxv;
        int minvr=INT_MAX,maxvr=-1;
        for(int i=0,j=n-1;i<n;i++,j--)
        {
            if(min(a[i],minvr)==a[i]) minvr=a[i];
            if(max(a[j],maxvr)==a[j]) maxvr=a[j];
            minv.push_back(minvr);
            maxv.push_back(maxvr);
        }
        reverse(maxv.begin(),maxv.end());
        int i=0,j=0,res=-1;
        while(i<n && j<n)
        {
            if(minv[i]<=maxv[j])
            {
                res=max(res,j-i);
                j++;
            }
            else i++;
        }
        return res;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends