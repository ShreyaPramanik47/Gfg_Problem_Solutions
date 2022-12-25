//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        sort(arr, arr+n);
        int diff = (arr[n-1]-arr[n-2]);
        int j=n-2;
        while(j>0){
            if(diff!=(arr[j]-arr[j-1])){
                return 0;
            }
            j--;
        }
        return 1;
    }

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
         (ob.checkIsAP(arr, n))? (cout << "YES" << endl) :
                       (cout << "NO" << endl);   
    }
 
  return 0;
}

// } Driver Code Ends
