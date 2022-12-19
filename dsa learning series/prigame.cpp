#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long int n) 
{
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    long long int i;
    for (i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t, i, counter=0;
    vector <long long int> prime(1000001);
    cin>>t;
    prime[0]=prime[1]=0;
    for(i=2;i<1000001;i++){
        if(isPrime(i))
            counter++;
        prime[i]=counter;
    }
    while(t--){
        long long int x, y;
        cin>>x>>y;
        prime[x]<=y?printf("Chef\n"):printf("Divyam\n");
    }
    return 0;
}