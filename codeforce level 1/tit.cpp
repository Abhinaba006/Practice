#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b);
void printArr(int a[], int n);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {
    // a[low, ...., high] is the array on which partition is to be done, may or may not be the whole array

    int i, j, pivot;
    i = low - 1;

    pivot = arr[high]; //say
    cout<<pivot<<" pivot"<<endl;

    for (j = low ; j < high; j++)   {

        if (arr[j] < pivot)  {
            i++;
            swap(&arr[i], &arr[j]);
        }     
    }

    swap(&arr[high], &arr[i+1]);
    return i+1;
}

void quickSort(int arr[], int low, int high)    {
    if (low < high) { //if there is more than one element
        
        int j = partition (arr, low, high);

        printf("part: %d low: %d high: %d\n", j, low, high);
        //divide
        quickSort(arr, low, j - 1);
        quickSort(arr, j+1, high);
    }
    
}


void printArr (int arr[], int n)   {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()  {
    int n = 5;
    int a[5] = {-3, 5, 4, 90, -40};

    printf("Original Array: ");
    printArr(a, n);

    quickSort(a, 0, n-1);
    // partition(a, 0, n-1);
    //printf("Pivot: %d\n", partition(a, 0, n-1));

    printf("Sorted Array: ");
    printArr(a, n);

    return 0;
}