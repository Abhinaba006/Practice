#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Merge(ll a[], ll l, ll m, ll r){
    ll ans = 0;
    ll n1=m-l+1, n2=r-m;
    ll la[n1], ra[n2];
    for(ll i=0;i<n1;i++)
        la[i] = a[l+i];
    for(ll i=0;i<n2;i++)
        ra[i] = a[m+1+i];
    // copy done, now arrange them
    ll k=l; // start filling from the left most pos
    ll i=0, j=0;
    while(i<n1 && j<n2){
        if(la[i]<=ra[j]){
            a[k] = la[i];
            i++;
        } // then it is ok
        else{
            //cout<<"ans increased to "<<ans;
            a[k] = ra[j];
            j++;
            ans += n1-i;
        }
        k++;
    }
    // copy the rest
    while(i<n1){
        a[k] = la[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = ra[j];
        j++;
        k++;
    }
    //cout<<endl;
    return ans;
}
ll mergesort(ll a[], ll l, ll r){
    ll ans = 0;
    if(l<r){
        ll m = l + (r-l)/2;`
        ans += mergesort(a, l, m);
        ans += mergesort(a, m+1, r);
        ans += Merge(a, l, m, r);
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    // here goews the merge sort
    ll ans = mergesort(a, 0, n-1);
    cout<<ans<<endl;
    //for(ll i=0;i<n;i++)
       //cout<<a[i]<<" ";
}