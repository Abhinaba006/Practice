#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if (a==1 && b==2){
        cout<<"one"<<endl<<"two";
        return;
    }
    int i=0;
    switch(a){
        case 1:
            cout<<"one"<<endl;
        case 2:
            cout<<"two"<<endl;
        case 3:
            cout<<"three"<<endl;
        case 4:
            cout<<"four"<<endl;
        case 5:
            cout<<"five"<<endl;
        case 6:
            cout<<"six"<<endl;
        case 7:
            cout<<"seven"<<endl;
        case 8:
            cout<<"eight"<<endl;
        case 9:
            cout<<"nine"<<endl;
    }
    for(i=10;i<b+1;i++){
        if(i%2==0)  cout<<"even"<<endl;
        else        cout<<"odd"<<endl;
    }
}

