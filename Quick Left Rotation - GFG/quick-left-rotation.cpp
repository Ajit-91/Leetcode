//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	void reverseArray(int arr[], int n)
	{
	    int start = 0;
	    int end = n - 1;
	    while(start < end)
	    {
	        swap(arr[start++], arr[end++]);
	    }
	}
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   
	   //-----Approach 1 : Extra space-----------------
	   //k = k % n;
	   //if(k == 0) return;
	   //int temp [k];
	   //// copy first k elements in temp
	   //for(int  i = 0; i < k; i++)
	   //{
	   //    temp[i] = arr[i];
	   //}
	   //// shift(here left) elements by k in original arr
	   //for(int i = k; i < n; i++)
	   //{
	   //    arr[i-k] = arr[i];
	   //}
	   //// copy contents of temp into original arr
	   //for(int i = 0; i < k; i++)
	   //{
	   //    arr[n-k+i] = temp[i];
	   //}
	   
	   //-------Approach : 2-----------------------------
	   k = k % n;
	   if(k == 0) return;
	   //reverseArray(arr, k);
	   //reverseArray(arr+k, n-k);
	   //reverseArray(arr, n);
	   reverse(arr, arr+k);
	   reverse(arr+k, arr+n);
	   reverse(arr, arr+n);
	   
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends