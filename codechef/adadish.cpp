#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> a(n, 0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int bur1=0, bur2=0, i=1;
    bur2 += a[0];
    while(i<n){
        while(bur2>=bur1 && i<n){
            bur1 += a[i];
            i++;
        }
        if(i<n){
            bur2 += a[i];
            i++;
        }
    }
    cout<<max(bur1, bur2)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
