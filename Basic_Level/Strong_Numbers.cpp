//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
	public:
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int sum=0;
		    int digit ;
		    int num=n;
		    while(num!=0){
		        int fact=1;
		        digit = num%10;
		        for(int i=digit ; i>0; i--){
		          fact = fact*i;  
		        }
		        sum= sum+fact;
		        num=num/10;
		    }
		    if(n==sum){
		        return 1;
		        
		    }
		    return 0;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends
