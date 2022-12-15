//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   int longestPerfectPiece(int arr[], int N) {
        multiset<int> ms;
        int k = 0, ans = 0;
        for(int i=0; i<N; i++)
        {
            ms.insert(arr[i]);
            while(k < N and !ms.empty() and *ms.rbegin() - *ms.begin() > 1)
                    ms.erase(arr[k++]);
            ans = max(ans, i-k+1);
        }
        while(k < N and !ms.empty() and *ms.rbegin() - *ms.begin() > 1)
                    ms.erase(arr[k++]);
            ans = max(ans, N-k);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends