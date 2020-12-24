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
    return (a+b)/2;
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
    Heap(int *b, bool (*c)(int, int)) : A(b), comp(c)
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
    virtual bool Insert(int e) = 0;
    virtual int GetTop() = 0;
    virtual int ExtractTop() = 0;
    virtual int GetCount() = 0;

protected:
    //using zero location
    int left(int i)
        return 2*i+1;
        

    // heap array
    int *A;
    // comparator
    bool (*comp)(int, int);
    // Heap size
    int heapSize;


};
