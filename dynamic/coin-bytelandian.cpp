#include<bits/stdc++.h>
using namespace std; 

int usd(int n)
{
    vector <int> dp(10000000 ,-1);
    //base case
    if(n <= 4 ) return n; 
    
    if(dp[n] != -1)
    return dp[n];
    
    return usd(n/2) + usd(n/3) + usd(n/4);
}

int main()
{
    int t , bytec; 
    cin>>t; 
    cout<<endl; 
    while(t--)
    {
        cin>>bytec;
        cout<<endl; 
        
        int p = usd(bytec);
        if(p >= bytec) cout<<p<<endl;
        
        else {
            cout<<bytec<<endl;
        }
        
    }
    return 0 ; 
}
