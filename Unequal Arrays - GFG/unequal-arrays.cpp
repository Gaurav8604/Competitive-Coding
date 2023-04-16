//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    long long solve(int n, vector<int> &a, vector<int> &b) {
        long long suma=0,sumb=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> odda,oddb,evena,evenb;
        for(int i=0;i<n;i++)
        {
            suma+=a[i];
            sumb+=b[i];
            if(a[i]%2==0) evena.push_back(a[i]);
            else odda.push_back(a[i]);
            if(b[i]%2==0) evenb.push_back(b[i]);
            else oddb.push_back(b[i]);
        }
        if(suma==sumb && odda.size()==oddb.size()) 
        {
            long long ans=0;
            for(int i=0;i<odda.size();i++)
            {
                ans+=abs(odda[i]-oddb[i]);
            }
            for(int i=0;i<evena.size();i++)
            {
                ans+=abs(evena[i]-evenb[i]);
            }
            return ans/4;
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        
        vector<int> B(N);
        Array::input(B,N);
        
        Solution obj;
        long long res = obj.solve(N, A, B);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends