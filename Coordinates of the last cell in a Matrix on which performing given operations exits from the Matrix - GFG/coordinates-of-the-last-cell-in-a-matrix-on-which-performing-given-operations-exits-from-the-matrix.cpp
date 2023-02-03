//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        pair<int,int> temp;
        int i=0,j=0;
        string direction="right";
        while(i<matrix.size() && j<matrix[0].size() && i>=0 && j>=0)
        {
            temp.first=i;
            temp.second=j;
            if(matrix[i][j]==0)
            {
                if(direction=="right")
                {
                    j++;
                }
                else if(direction=="left")
                {
                    j--;
                }
                else if(direction=="up")
                {
                    i--;
                }
                else if(direction=="down")
                {
                    i++;
                }
            }
            else
            {
                if(direction=="right")
                {
                    direction="down";
                }
                else if(direction=="left")
                {
                    direction="up";
                }
                else if(direction=="up")
                {
                    direction="right";
                }
                else if(direction=="down")
                {
                    direction="left";
                }
                matrix[i][j]=0;
            }
        }
        return temp;
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends