#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   // while(t--){
        int cnt;
        int n, tme;
        cin>>n;
        float time[n][n];
        int a[n], b[n]; // b[n] will contain the answers
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //this matrix will hold all the time relation
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || a[i]==a[j])    time[i][j] = -1;
                else        time[i][j] = ((i-j)/(a[j]-a[i]));
            }
        }

        for(int i1=0;i1<n;i1++){    //main loop
            cnt = 0;
            for(int j1=0;j1<n;j1++){        //j1 is targeted to be infected
                tme = time[i1][j1];
                if(tme>0){
                    set <int> inf; //keep track of the infected one
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n;j++){
                            if (inf.find(j1)==inf.end() && time[i][j]>=tme){
                                inf.insert(j1);
                                cnt++;
                                //cout<<j<<" is infected by "<<j1<<" at "<<tme<<endl;
                            }
                        }
                    }
                }
                b[i1] = cnt;
            }
        }
       /* for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<time[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;*/
        cout<<*min_element(b, b+n)+1<<" "<<*max_element(b, b+n)+1<<endl;
    //}
}
