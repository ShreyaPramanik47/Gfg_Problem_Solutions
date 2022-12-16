//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a,a+n);
        vector<int>v;
        // vector<int>w;
        int start=0;
        int end = n-1;
        while(start<=end){
            v.push_back(a[start]);
            v.push_back(a[end]);
            start++;
            end--;
        }
        for(int i=0; i<v.size(); i++){
            answer[i]=v[i];
        }
        
        
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
		int i, a[n+5], answer[n+5]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.Rearrange(a, n, answer);
		
		for(i=0;i<n;i++)
		cout<<answer[i]<<" ";
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends
