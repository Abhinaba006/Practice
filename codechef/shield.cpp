#include<bits/stdc++.h>
using namespace std;
int cnt;
void se()
void shield()
{
    int n, m;
    int a[n][m];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // chk for 1
    cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            se(*(a+(i*n)+j));
        }
    }
    //chk for 0
}
int main()
{
    iso_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        shield();
}
