//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<char> stk,stemp;
            for(int i=0;i<s.length();i++)
            {
                stk.push(s[i]);
            }
            string ans="";
            while(!stk.empty())
            {
                char x=stk.top();
                stk.pop();
                if(x>='0' &&x<='9')
                {
                    stemp.push(x);
                }
                else
                {
                    while(!stemp.empty())
                    {
                        char y=stemp.top();
                        ans+=y;
                        stemp.pop();
                    }
                    ans+=x;
                }
            }
            while(!stemp.empty())
            {
                char y=stemp.top();
                ans+=y;
                stemp.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends