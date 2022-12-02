//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        string s1="",s2="";
        vector<int> arr1,arr2;
        for(int i=0;i<m;i++)
        {
            if(s[i]!='#')
            {
                s1+=s[i];
                arr1.push_back(i);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(t[i]!='#')
            {
                s2+=t[i];
                arr2.push_back(i);
            }
        }
        if(s1==s2)
        {
            for(int i=0;i<arr1.size();i++)
            {
                if(s1[i]=='A')
                {
                    if(arr1[i]<arr2[i]) return 0;
                }
                else if(s1[i]=='B')
                {
                    if(arr1[i]>arr2[i]) return 0;
                }
            }
            return 1;
        }
        else return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends