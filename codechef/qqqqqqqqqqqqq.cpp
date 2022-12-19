#include <bits/stdc++.h>
using namespace std;


#define ll long long int




ll getMinlength(ll low, ll high){
    if(low >= high || high - low == 1){
        return 0;
    }
    
    ll mid = low + (high - low)/2;
    
    return (high - low) + getMinlength(low,mid) + getMinlength(mid, high);
}


int main()
{  

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
     ll n,m;
    //  scanint(n); scanint(m);
     cin >> n >> m;
     ll low = 0;
     ll high = n+1;
     
     ll ans = getMinlength(low,high);
     
     if(ans > m){
         cout << -1 << "\n";
     }else if(m >= ans && m <= (n*(n+3))/2){
         cout << 0 << "\n";
     }else{
         cout << m-(n*(n+3)/2) << "\n";
     }
    }   

    return 0;            
}