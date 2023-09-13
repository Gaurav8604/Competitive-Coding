//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        if(n*9<s || (s==0 && n>1)) return "-1";
        string ans="";
        while(s>0 && n--){
            if(s>9){
                s-=9;
                ans+='9';
            }
            else{
                ans+=to_string(s);
                s=0;
                break;
            }
        }
        while(n--){
            ans+='0';
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends