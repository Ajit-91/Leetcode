//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // Approach 1 : Using extra space
        
        // vector<int> ans(N, 0);
        // for(int elm : arr)
        // {
        //     if(elm-1 < N)
        //     {
        //         ans[elm - 1]++;
        //     }
        // }
        // for(int i = 0; i < N; i++)
        // {
        //     arr[i] = ans[i];
        // }
        
        // Optimal approach : concept is to store two numbers at same memory location
        /*
        Trick to store two numsbers at one location

        => transform the number such that both numbers can be derived from it

        

        eg store a = 3 and b = 4 in just one var or location

        take integer n such that n > max(a, b) i.e n > both a and b

        

        let n = 6

        

        now to store both and b we will use var a only
        let ,

        Ta = transformed a

        Oa = original a

       

        so, transform a as follows : 

        Ta = Oa + Ob*n

        here , Oa = 3, Ob = 4

        So, Ta = 3 + 4*6 = 27



        Now get Oa and Ob as follows:

        Oa = Ta % n  (here, Oa = 27 % 6 = 3)

        Ob = Ta / n   (here, Ob = 27 / 6 = 4)
            
        */
        
        int n = P+1;
        for(int elm : arr)
        {
            int index = elm % n - 1; // originalElm - 1
            if(index >= N) continue;
            
            int modifiedA = arr[index];
            int b = modifiedA / n; // b is the frequency of elment a
            int originalA = modifiedA % n;
            arr[index] = originalA + (b+1)*n;
        }
        for(int& elm : arr)
        {
            // this would give b i.e freq of each element
            elm /= n;
        }
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends