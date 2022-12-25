//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    //code here.
    int cnt=0;
    int cntt=0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            if(s[i]=='B')
            cnt++;
        }
        if(i%2!=0){
          if(s[i] == 'R')
            cntt++;
        }
    }
    return cnt+cntt;
}
