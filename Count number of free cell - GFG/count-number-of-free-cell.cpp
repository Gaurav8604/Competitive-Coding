//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
//   void rowcolassign(int n,int r,int c,vector<vector<int>> &mat)
//   {
//       for(int i=0;i<n;i++)
//         mat[r-1][i]=1;
//       for(int i=0;i<n;i++)
//         mat[i][c-1]=1;
//   }
//   int zerocount(vector<vector<int>> mat)
//   {
//       int ans=0;
//       for(int i=0;i<mat.size();i++)
//       {
//           for(int j=0;j<mat.size();j++)
//             if(mat[i][j]==0)
//                 ans++;
//       }
//       return ans;
//   }
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
    // vector<int> temp(n,0);
    // vector<vector<int>> mat(n,temp);
    unordered_set<int> row,col;
    int temp=0;
    vector<long long int> ans(0);
    for(int i=0;i<arr.size();i++)
    {
        // rowcolassign(n,arr[i][0],arr[i][1],mat);
        // ans.push_back(zerocount(mat));
        int rows=row.size();
        int cols=col.size();
        row.insert(arr[i][0]);
        col.insert(arr[i][1]);
        if(rows!=row.size() && cols!=col.size())
        {
            temp+=2*n-cols-rows-1;
        }
        else if(rows!=row.size())
        {
            temp+=n-cols;
        }
        else if(cols!=col.size())
        {
            temp+=n-rows;
        }
        // cout<<cols<<" "<<rows<<endl;
        // cout<<temp<<endl;
        ans.push_back(pow(n,2)-temp);
        
    }
    return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends