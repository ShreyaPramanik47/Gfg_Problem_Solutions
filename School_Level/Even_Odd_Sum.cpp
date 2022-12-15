//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        // vector<int>v;
        int sum=0;
        int ans=0;
        for(int i=0; i<N; i=i+2){
                sum=sum+Arr[i];
        }
      for(int j=1; j<N; j=j+2){
            ans = ans+Arr[j];
        }
      return { sum , ans};
    //  v.push_back(sum);
    //   v.push_back(ans);
    //   return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends
