//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        unordered_map<char,int> mp;
        for(char x:s)
            mp[x]++;
        int sum=0;
        for(auto x:mp)
        {
            sum+=x.second;
        }
        int pointer=1;
        while(sum!=mp.size())
        {
            if(pointer==1)
            {
                for(int i=0;i<s.length();i++)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        if(mp[s[i]]>1)
                        {
                            mp[s[i]]--;
                            sum--;
                            s.erase(s.begin()+i);
                            break;
                        }
                    }
                }
                pointer=-1;
            }
            else
            {
                for(int i=s.length()-1;i>=0;i--)
                {
                    if(mp.find(s[i])!=mp.end())
                    {
                        if(mp[s[i]]>1)
                        {
                            mp[s[i]]--;
                            sum--;
                            s.erase(s.begin()+i);
                            break;
                        }
                    }
                }
                pointer=1;
            }
        }
        if(pointer==-1) reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends