#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*With the use of the stack one can achieve the solution to the problem.
Follow the below algorithm for to achieve the solution.

1) Push the first element to stack.
2) Pick rest of the elements one by one and follow the following steps in loop.
….a) Mark the current element as next.
….b) If stack is not empty, then pop an element from stack and compare it with next.
….c) If next is greater than the popped element, then next is the next greater element for the popped element.
….d) Keep popping from the stack while the popped element is smaller than next.next becomes the next greater element for all such popped elements
….e) Finally, push the next in the stack.
3) After the loop in step 2 is over, pop all the elements from stack and print -1 as next element for them.*/

void solve()
{
    int n;
    cin>>n;
    vector <ll> a(n, 0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    stack <ll> s;
    unordered_map <ll, ll> mp;
    s.push(a[0]);
    for(int i=1;i<n;i++)
    {
        if (a[i]<s.top())
            s.push(a[i]);
        else{
            while(!s.empty() && a[i]>=s.top()){
                mp[s.top()]=a[i];
                s.pop();
            }
            s.push(a[i]);
        }
    }
    // now the stack has elements left that has no greater elem
    while(!s.empty()){
        mp[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
        cout<<mp[a[i]]<<" ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
