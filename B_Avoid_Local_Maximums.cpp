#include<bits/stdc++.h>
using namespace std;
Array Type* get_damages(Array type 
vector<int> H){
    int n = H.size();
    vector<int> Damage(n);
    int specialHouseIndex = 0;
    for(int i=1;i<n;i++){
        if(H[i]<H[i-1]){
            specialHouseIndex = i;
        }
    }
    for(int i=specialHouseIndex;i<n;i++){
        Damage[i] = 1;
    }
    
    int i=0, j=specialHouseIndex;
    while(i<specialHouseIndex || j<n){
        if(j<n && H[j]<H[i]){
            j++;
        }
        else{
            Damage[i]=specialHouseIndex-j;
            i++;
        }
    }
    return Damage;
}
