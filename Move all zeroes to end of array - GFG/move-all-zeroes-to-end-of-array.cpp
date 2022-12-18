//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	void pushZerosToEnd(int arr[], int n) 
	{
	    // code here
	   int i = 0, j = 0;
        // i ensures that all elements before i are non zero
        // j finds the non zero to be swapped with ith element 
        while (i < n && j < n)
        {
            if (arr[i] != 0)
            {
                // everything is ok move on
                i++;
                j++;
            }
            else if (arr[j] != 0 && arr[i] == 0)
            {
                // favourable condition for swapping
                swap(arr[j], arr[i]);
                i++;
            }
            else
            {
                // ith elem is 0 and still finding for non zero so incrementj
                j++;
            }
        }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends