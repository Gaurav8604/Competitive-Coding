//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int zero=0;
        for(int i=0;i<n;i++)
        {
            zero++;
        }
        if(zero==0) return -1;
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                temp.push_back(arr[i]);
            else
            {
                ans.push_back(temp);
                temp.clear();
            }
        }
        if(temp.size()!=0) 
            ans.push_back(temp);
        
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i].size()!=0)
                count++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends