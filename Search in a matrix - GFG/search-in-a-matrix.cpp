//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   //------ Binary search------------------
	   // Useful when first element of a row is greater than last element of previous row
	   
	   // int size = M*N;
	   // int low = 0;
	   // int high = size-1;
	   // while(low <= high)
	   // {
	   //     int middle = low + (high-low)/2;
	   //     int i = middle / M;
	   //     int j = middle % M;
	   //     if(mat[i][j] == X) return 1;
	   //     else if(mat[i][j] < X) low++;
	   //     else high--;
	   // }
	   // return 0;
	   
	   int i = 0;
	   int j = M-1; // rightmost corner
	   while(i < N && j >= 0)
	   {
	       if(mat[i][j] == X) return 1;
	       else if(mat[i][j] < X) i++; // X must be in next row
	       else if(mat[i][j] > X) j--; // X must be in previous col
	   }
	   return 0;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends
