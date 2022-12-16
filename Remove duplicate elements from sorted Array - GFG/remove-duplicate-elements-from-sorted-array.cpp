//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
       // i is catcher and j is thrower
       // that's why i starts from 0 and j starts from 1
       // j moves forward until new element(distinct) is not found (i.e Throws new element)
       // when new element is found by j , i increments and copies the arr[j] (i.e catches new elm)
       int i = 0;
       for(int j = 1; j < n; j++){
           if(arr[i] != arr[j]){
               arr[++i] = arr[j];
           }
       }
       return i+1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends