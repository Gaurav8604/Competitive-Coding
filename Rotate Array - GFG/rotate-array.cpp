//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    void rotatearr(int *arr,int n)
    {
        int temp=arr[0];
        for(int i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        d%=n;
        vector<int> temp;
        for(int i=0;i<d;i++)
        {
            temp.push_back(arr[i]);
        }
        for(int i=d;i<n;i++)
        {
            arr[i-d]=arr[i];
        }
        int j=0;
        for(int i=n-d;i<n;i++,j++)
        {
            arr[i]=temp[j];
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends