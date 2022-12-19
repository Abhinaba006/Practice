#include<bits/stdc++.h>
using namespace std;
void print(vector <int> a){
    for(auto i=a.begin();i!=a.end();++i){
        cout<<*i<<" ";
    }

}
int bin(vector <int> *a, int high, int low, int key){
    if(low>=high)
        return (key>(*a)[low])? (low+1): low;
    int mid = (low+high)/2;
    if((*a)[mid]==key)
        return mid+1;
    if(key>(*a)[mid])
        return bin(a, high, mid+1, key);
    return bin(a, mid-1, low, key);
}
void sorts(vector <int> *a)
{
    int key, j, loc;
    for(int i=1;i!=(*a).size();++i){
        j=i-1;
        key = (*a)[i];
        loc = bin(a, j, 0, key);
        while(j >= loc){
            (*a)[j+1]=(*a)[j];
            j--;
        }
        (*a)[j+1]=key;
    }
    cout<<endl;
}
int main(){
    vector <int> a;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    sorts(&a);
    print(a);
}
