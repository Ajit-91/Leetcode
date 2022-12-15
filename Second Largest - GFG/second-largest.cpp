//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    //-------------O(2N)-----------------
	   // if(n < 2) return -1;
	   // // find largest elm
    //     int largest1 = INT_MIN;
    //     for(int i = 0; i < n; i++)
    //     {
    //         largest1 = max(arr[i], largest1);
    //     }
        
    //     // 2nd largest would be the largest elm among all except largest1
    //     int largest2 = INT_MIN;
    //     for(int i = 0; i < n; i++)
    //     {
    //         if(arr[i] == largest1) continue;
    //         largest2 = max(arr[i], largest2);
    //     }
    //     return largest2 == INT_MIN ? -1 : largest2;
    
    
    //--------------O(N)-------------------------
    
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > first)
            {
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] < first)
            {
                second = arr[i];
            }
        }
        return second == INT_MIN ? -1 : second;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends