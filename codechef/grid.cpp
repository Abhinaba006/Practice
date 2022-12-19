#include<bits/stdc++.h>
using namespace std;
int p, k;
void print(int *a, int m, int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(a+(i*n)+j)<<" ";
        }
        cout<<endl;
    }
}
int same(int *a, int *kc)
{
    for(int i=0;i<p;i++){
        for(int j=0;j<k;j++){
            if(*(a+(i*k)+j)!=*(kc+(i*k)+j)  )
                return false;
        }
    }
    return true;
}
int slide(int *a, int *b, int m, int n, int s)
{
    int bq[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            bq[i][j]=*(a+(i*s)+j);
        }
    }
    //cout<<endl;
    //print((int *)bq, m, n);
    //cout<<endl<<"-----------"<<endl;
    /print((int *)b, p, k);
    //cout<<"__________________________"<<endl;
    if(same((int *)bq, b))
        return 1;
    else
        return 0;
}
int main()
{
    int t, x, y;
    cin>>t;
    while(t--){
    cin>>x>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    cin>>p>>k;
    int b[p][k];
    for(int i=0;i<p;i++){
        for(int j=0;j<k;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<=x-p;i++){
        for(int j=0;j<=y-k;j++){
            if(slide((int *)a+(i*y)+j, (int *)b, p, k, y))
            {
                cout<<"YES";
                goto sd;
            }
        }
    }
    cout<<"NO";
    sd:;
    }
    //print((int *)b, p, k);
    /*int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j]
        }
    }*/
}
