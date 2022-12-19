#include<bits/stdc++.h>
typedef long long ll; 
using namespace std;
long long int ans=0;
void Merge(int a[], int l, int m, int r)
{
    int n1, n2;
    n1 = m-l+1;
    n2 = r-m;
    int la[n1], ra[n2];
    for(int i=0;i<n1;i++)
        la[i]=a[l+i];
    for(int i=0;i<n2;i++)
        ra[i]=a[m+1+i];
    int i=0, j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(la[i]<=ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else{
            a[k] = ra[j];
            j++;
            ans += n1-i;
        }
        k++;
    }
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

}
void mergeSort(int a[], int l, int r)
{
    if(l<r) //base case
    {
        int m = (l+(r-1)) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        Merge(a, l, m, r);
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    /*for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j])
                ans++;
        }
    }*/
    ans=0;
    mergeSort(a, 0, n-1);
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    //cout<<ans<<endl;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve();
}
