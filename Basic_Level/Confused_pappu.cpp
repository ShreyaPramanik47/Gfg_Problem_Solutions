//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    }
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    int num = amount;
       string str = to_string(num);
 
    // reversing the string
    reverse(str.begin(), str.end());
 
    // converting string to integer
    num = stoi(str);

    int ans=0;
    while(num!=0){
        int digit = num%10;
        if(digit == 6){
            digit = digit +3;
        }
        ans = (ans*10)+digit;
        num=num/10;
    }
    return (ans-amount);
    //code
}
