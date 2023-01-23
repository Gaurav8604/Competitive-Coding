//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void removepair(string &s)
    {
        // cout<<s<<endl;
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]==s[i])
            {
            s.erase(i-1,2);
            removepair(s);
            }
        }
        return;
    }
    string removePair(string s) {
        removepair(s);
        if(s.length()==0) return "-1";
        return s;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends