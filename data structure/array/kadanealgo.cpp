#include<bits/stdc++.h>
using namespace std;
/* we will use kadanes's algo.
i will iterate through the every element of the array and check if a element should be added to the subarray or not,
if adding a new value decrease the total sum then we will save the value in max-so-far, max-till-endd will be updated and a new sub array
    will start from there.
    basically mas-end will find the sub array's sum and max so far keep track of the max value*/
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int meh=0, msf=INT_MIN;
                               //msf is negetive so it will work if the whole arrayt is negetive
    for(int i=0;i<n;i++){
        meh += a[i];
        if (meh<a[i])
            meh = a[i];        // this mean the element can start an sub array by its own that eill be greater than any sub array
                               // before it.
        msf = max(msf, meh);   // keeping the max sum of hte sub-array
    }
    cout<<msf<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
