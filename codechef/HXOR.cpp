#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x;
    long long int r;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0, flag=0, left=1;
    // for in the array and before all digit become zero
    while(x>0 && i<n-1){
        flag=0;
        int p=log(a[i])/log(2);
        r=pow(2,p);
        int j;
        // j part
        for(int k=i+1;k<n;k++){
            if((a[k]^r)<a[k]){
                j=k;
                flag=-1;
                break;
            }
        }
        if(flag!=-1){
            j=n-1;
        }
        a[i] = a[i]^r;
        a[j] = a[j]^r;
        while(a[i]==0 && i<n)
            i++;
        x--;
    }
    left=left+x+1;
    if(left>0 && n==2){
        if(left%2!=0){
            a[0]=a[0]^1;
            a[1]=a[1]^1;
        }
    }
    //cout<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
