//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int n) {
        map<int,int> mp;

        int ans=1;

        mp[arr[0]]=1;

        int j=0,i=1;

        while(i<n)

        {

             mp[arr[i]]++;

            if((--mp.end())->first-mp.begin()->first<=1)

            {

                ans=max(ans,i-j+1);

            }

            else

            {

                mp[arr[j]]--;

                if(mp[arr[j]]==0)

                mp.erase(arr[j]);

                j++;

            }

             i++;

        }

        return ans;  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends