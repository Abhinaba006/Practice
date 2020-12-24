#include<bits/stdc++.h>
using namespace std;
/*
Heap Capacity
*/
#define MAX_HEAP_SIZE (128)
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0)

// utility functions

//exchange a and b, inline
inline
void exch(int &a, int &b)
{
    int c = a;
    b=a;
    a=c;
}

//greater or smaller, used as comparetor
bool Greater(int a, int b)
{
    return a>b;
}

bool Smaller(int a, int b)
{
    return a<b;
}

int Average(int a, int b) 
{ 
    return (a + b) / 2; 
} 

int Signum(int a, int b)
{
    if (a==b)
        return 0;
    return a<b?-1:1;
}

// Heap implementation
// The functionality is embedded into
// Heap abstract class to avoid code duplication

class Heap
{
public:
    // Initialize heap array and comparator required
    // in heapification
    Heap(int *b, bool (*c)(int, int)) : A(b), comp(c) // a function is send as parameter by using pointer
    {
        heapSize = -1;
    }

    // destructor
    virtual ~Heap()
    {
        if(A)
            delete[] A;
    }

    // four interface for heap abstract data type,m equal to zero means it is pure virtual
    // in virtual function we can edit them after inheriting
    virtual bool Insert(int e) = 0;
    virtual int GetTop() = 0;
    virtual int ExtractTop() = 0;
    virtual int GetCount() = 0;

protected:
    //using zero location
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }

    int parent(int i)
    {
        if (i<=0)
            return -1;
        return (i-1)/2;
    }

    // heap array
    int *A;
    // comparator
    bool (*comp)(int, int);
    // Heap size
    int heapSize;

    // returns top element of the heap
    int top(){
        int max = -1;
        if(heapSize>=0)
            max = A[0];
        return max;
    }

    // returns the count
    int count(){
        return heapSize+1;
    }

    // heapify
    void heapify(int i){
        int p = parent(i);
        if(p>=0 && comp(A[i], A[p])){
            exch(A[i], A[p]);
            heapify(p);
        }
    }

    //delete top

    int deleteTop(){
        int del = -1;

        if(heapSize>-1){
            exch(A[0], A[heapSize]);
            heapSize--;
            heapify(parent(heapSize+1));
        }
    }

    // insert helper
    bool insertHelper(int key){
        bool ret = false;
        if(heapSize<MAX_HEAP_SIZE){
            ret = true;
            heapSize++;
            A[heapSize] = key;
            heapify(heapSize);
        }
        return ret;
    }
};
// editing heap to create max heap

class minHeap : public Heap{
private:
    
public:
    minHeap() : Heap(new int[MAX_HEAP_SIZE], &Greater){}
    ~minHeap() {}

    int GetTop(){
        return top();
    }

    // extract top
    int extractTop(){
        return deleteTop();
    }

    //get count

    int getCount(){
        return count();
    }

    //insert
    bool Insert(int key){
        return insertHelper(key);
    }
};

// editing heap to create min heap

class minHeap : public Heap{
private:
    
public:
    minHeap() : Heap(new int[MAX_HEAP_SIZE], &Smaller){}
    ~minHeap() {}

    int GetTop(){
        return top();
    }
    // extract top
    int extractTop(){
        return deleteTop();
    }
    //get count
    int getCount(){
        return count();
    }
    //insert
    bool Insert(int key){
        return insertHelper(key);
    }
};

// getMedian
int getMedian(){

}
//printMedian

//main
