// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void merge(int a[], int l, int m, int r){
    int left_a[m-l+1];
    int right_a[r-m];
    for(int i=0;i<m-l;i++){
        left_a[i] = a[l+i];
    }
    for(int i=0;i<r-m;r++){
        right_a[i]=a[i+1+m];
    }
    int i=0, j=0, k=l;
    while(i<m-l+1 && j<r-m){
        if
    }

}
void merge_sort(int a[], int l, int r){
    int m = (l+r)/2;
    merge_sort(a, l, m-1);
    merge_sort(a, m, r-1);
    merge(a, l, m, r);
}
void insertion(int a[], int n){
    int i, key;
    for(int i=1;i<n;i++){
        key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
void selection(int a[], int n){
    for(int i=0;i<n-1;i++){
        int m=i+1;
        for(int j=i;j<n;j++){
            if(a[j]<a[m])   m=j;
        }
        swap(&a[i], &a[m]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection(a, n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}