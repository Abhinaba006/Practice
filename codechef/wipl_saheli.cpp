#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll possible(ll x,ll a[],ll n){
  int possiblesum[x+1]={'\0'};
  possiblesum[0]=1;
  for(int i=0; i<n; i++){
      for(int j=x; j>=a[i]; j--){
          if(possiblesum[j-a[i]]==1)
              possiblesum[j]=1;
        }  
      }
  return possiblesum[x];
}
void solve(){
  ll n,k;
  cin>>n>>k;
  ll sum=0,ans=0;
  ll a[n]={'\0'};
  for(ll i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
  } 
  sort(a,a+n,greater<>());
  if(n==1 || sum<2*k){
  cout<<"-1"<<endl;
  return;
  }
  else if(sum==2*k){
    if(sum%2==1 || a[0]>k){
      cout<<"-1"<<endl;
    return;
    }
    else if(a[0]==k)
    {
      cout<<n<<endl;
      return;
    }
    else
    { 
      if(possible(k,a,n))
      {
         cout<<n<<endl;
        return;
      }
      else
      {
         cout<<"-1"<<endl;
        return;
      }     
    }
  }
  else if(a[0]>=k)
  { 
    ans=1;
    ll tempsum=0;
    for(ll i=1; i<n; i++){ 
       tempsum+=a[i];
       ans++;
       if(tempsum>=k)
       {
          cout<<ans<<endl;
         return;
       }
    }
  }
  else
  {
    ll tempsum=0;
    for(ll i=0; i<n; i++)
    {
       tempsum+=a[i];
       if(tempsum>=2*k)
       {
          cout<<i+1<<endl;
          return;
       }
    }
    cout<<"-1"<<endl;
  }
}

    
  
  
  
int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--)
	{solve();
	}
	
}
