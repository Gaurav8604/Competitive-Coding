//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
    vector<long long> ans;
    void recurse(long long n,long long i,long long sum)
    {
        if(sum>n) return;
        ans.push_back(sum);
        recurse(n,i+1,sum*i);
    }
public:
    vector<long long> factorialNumbers(long long n)
    {
        recurse(n,2,1);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends