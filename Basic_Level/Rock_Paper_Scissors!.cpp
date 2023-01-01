//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string gameResult (string s)
        {
            //code here.
            for(int i=0; i<(s.size()-1); i++){
                if((s[i]=='R' && s[i+1]=='S')||(s[i]=='S' && s[i+1]=='P') ||(s[i]=='P' && s[i+1]=='R')){
                    return "A";
                }
                else if((s[i]=='S' && s[i+1]=='R')||(s[i]=='P' && s[i+1]=='S') ||(s[i]=='R' && s[i+1]=='P')){
                    return "B";
                }
                else{
                    return "DRAW";
                }
                
            }
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
