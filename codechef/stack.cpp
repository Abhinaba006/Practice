#include<bits/stdc++.h>
using namespace std;
void stacka(){
    int n, temp;
    int j=0, k=0;
    cin>>n;
    vector <int> main, res;
    for(int i=0;i<n;i++){
        cin>>temp;
        main.push_back(temp);
    }
    res[0]= main[0];

    for(int i=1;i<n;i++){
                if(main[i]>res[j]) {
            res[j+1]=main[i];
            j++;
        }
        else{
            res[upper_bound(res, res+j, main[i])=main[i];
        }
    }
    res[j+1]='\0';
    cout<<j+1<<" ";
    print(res);
}
int main(){
    int t;
    cin>>t;
    while(t--)
        stacka();
}
