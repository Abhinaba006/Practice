#include<bits/stdc++.h>
using namespace std;
class SegmentTree {
    private:
    int tree[1000];
    int n;
    public:
    SegmentTree(int arr[], int n){
        this->n = n;
        construct(0, n-1, 0, arr);
    }
    int construct(int ss, int se, int si, int arr[]){
        if(se==ss) this->tree[si] = arr[ss];
        else{
            int mid =  (ss+se)/2;
            this->tree[si] = this->construct(ss, mid, 2*si+1, arr) + this->construct(mid+1, se, 2*si+2, arr);
        }
        return this->tree[si];
    }
    int getSum(int qs,int qe,int ss,int se,int si){
        if(qs>se || qe<ss) return 0;
        if(qs<=ss && qe>=se) return tree[si];
        int mid = (ss+se)/2;
        return this->getSum(qs, qe, ss, mid, 2*si+1) + this->getSum(qs, qe, mid+1, se, 2*si+2);
    }
    int getSum(int s, int e){
        return getSum(s, e, 0, this->n-1, 0);
    }
};
int main(){
    int a[] = {1, 3, 4, 5, 6};
    SegmentTree s(a, 5);
    cout<<s.getSum(1, 3);
}