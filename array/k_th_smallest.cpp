#include<bits/stdc++.h>
using namespace std;
// so this my first problem usig hrap 
// swap 
void swap(int* x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
// make a heap class
class minHeap{
    int* harr; // pointer to the array
    int capacity;
    int heapsize; // current heap size
    // these are private
public:
    // constructor
    minHeap(int a[], int size);
    void heapify(int i); // aka shiftdown
    // parent
    int parent(int i){ return (i-1)/2; }
    // left
    int left(int i){ return 2*i + 1; }
    // right
    int right(int i){  return 2*i+2; }

    // extract min
    int extractMin();
    int getMin() { return harr[0]; }
    ~minHeap(){

    }
};
minHeap::minHeap(int a[], int size){
    heapsize = size;
    harr = a;
    int i = (heapsize+1) / 2;
    while(i>=0){
        heapify(i);
        i--;
    }
}
int minHeap::extractMin(){
    if (heapsize==0)
        return INT_MAX; // dk why it is there
    int root = harr[0];
    if (heapsize>1){
        harr[0] = harr[heapsize-1];
        heapify(0);
    }
    heapsize--;
}
void minHeap::heapify(int i){
    int minIndex = i;
    int l = left(i);
    int r = right(i);
    if(l<heapsize && harr[l]<harr[i])
        minIndex = l;
    if(r<heapsize && harr[r]<harr[minIndex])
        minIndex = r;
    if (i != minIndex){
        swap(&harr[i], &harr[minIndex]);
        heapify(minIndex);
    }
}
int kThSmallestElement(int arr[], int n, int k){
    minHeap mh(arr, n);
    for(int i=0;i<k-1;i++){
        //cout<<mh.getMin()<<" ";
        mh.extractMin();
    }
    //cout<<endl;
    return mh.getMin();
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int k;
        cin>>k;
        cout<<kThSmallestElement(a, n, k)<<endl;;
    }
}
