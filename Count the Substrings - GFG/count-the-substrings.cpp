//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string s)
    {
        int n=s.length(),count=0;
        for(int i=0;i<n;i++)
        {
            int low=0,upp=0;
            for(int j=i;j<n;j++)
            {
                if(s[j]>='a' && s[j]<='z') low++;
                else upp++;
                if(upp==low)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends