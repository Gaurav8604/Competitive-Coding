//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        unordered_map<int,int> umap;
        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;
        vector<int> arr;
        for(int i=0;i<str.length();i++){
            arr.push_back(umap[str[i]]);
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]<arr[i]){
                arr[i]-=arr[i-1];
                arr[i-1]=0;
            }
        }
        return accumulate(arr.begin(),arr.end(),0);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends