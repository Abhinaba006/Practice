#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        int a_sum =0, b_sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a_sum += a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            b_sum += b[i];
        }
        int i=0;
        sort(b, b+m, greater<int>());
        sort(a, a+n);
        //int dif = a_sum - b_sum;
        while((a_sum<b_sum) && (i<m && i<n)){
            swap(a+i, b+i);
            i++;
            for(int ij=0;i<n;ij++){
                cin>>a[ij];
                a_sum += a[ij];
            }
            for(int ij=0;ij<m;ij++){
                cin>>b[ij];
                b_sum += b[ij];
            }
        }
        /*while(dif<1){
            //cout<<"decreasing the diff by "<<2*(b[i]-a[i])<<" dif is "<<dif<<endl;
            dif +=  2*(b[i]-a[i]);
            i++;
        }*/
        cout<<i<<endl;

    }
}