#include <bits/stdc++.h>
using namespace std;
int findTriplet(int arr[], int n)
{
    int ans=0;
    sort(arr, arr+n);
    for(int i=n-1;i>=0;i--){
        int j=0;
        int k = i-1;
        while(j<k)
            if(arr[i] == arr[j]+arr[k])
            {
                ans++;
                k--;
                j++;
            }
            else if(arr[i] < arr[j]+arr[k])
                k--;
            else
                j++;
    }
    return ans;
}
int main()
{
    int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findTriplet(arr, n);
    return 0;
}
