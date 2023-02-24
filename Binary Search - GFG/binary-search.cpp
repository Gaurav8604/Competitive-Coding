//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
    void rec(int arr[],int i,int j,int k,int &find)
    {
        if(i>j) return;
        int mid=(i+j)/2;
        if(k==arr[mid]) find=mid;
        if(k<arr[mid]) rec(arr,i,mid-1,k,find);
        else if(k>arr[mid]) rec(arr,mid+1,j,k,find);
        return;
    }
    int binarysearch(int arr[], int n, int k) {
        int find=-1;
        rec(arr,0,n-1,k,find);
        return find;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends