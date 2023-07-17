//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans="";
		   map<char,int>freq;
		   queue<char>currentFirstUnique;
		   
		   for(int i=0;i<A.size();i++){
		       freq[A[i]]++;
		       if(freq[A[i]]==1){
		           currentFirstUnique.push(A[i]);
		       }
		       while(!currentFirstUnique.empty()&&freq[currentFirstUnique.front()]!=1){
		           currentFirstUnique.pop();
		       }
		       char curr='#';
		       if(!currentFirstUnique.empty()){
		           curr=currentFirstUnique.front();
		       }
		       ans+=curr;
		   }
		   
		   return ans;
		   
		
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends