    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ld long double
    #define pb push_back
    #define pf push_front
    #define mp make_pair
    #define F first
    #define S second
    #define mod 1000000007
    #define md 998244353 
    #define INF INT_MAX
    #define vl vector<ll>
    #define vi vector<int>
    #define pi pair<int,int>
    #define pl pair<ll,ll>
    #define vpl vector<pl>
    #define vpi vector<pi>
    #define ml map<ll,ll>
    #define mi map<int,int>
    #define m(a,b) map<a,b>
    #define rep(i, s, n) for(int i=s;i<n;i++)
    #define mxn 100005
    #define printfloat(y) cout<<fixed<<setprecision(9)<<y<<endl;
    #define YesNo(f) if(f){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
    #define setval(a,val) memset(a,val,sizeof(a)) 
    #define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
    #define new1(n) int n;cin >> n;
    #define new2(n, k) int n, k;cin >> n >> k;
    #define new3(a, b, c) int a, b, c;cin >> a >> b >> c;
    #define new4(a, b, c, d) int a, b, c, d;cin >> a >> b >> c >> d;
    #define Arr(arr, n) int arr[n]; rep(i, 0, n)  cin>>arr[i];
    int med(vi t, int n){
        rep(i, 0, n) cout<<t[i]<<" ";
        cout<<endl;
        sort(t.begin(), t.begin()+n);
        cout<<t[n/2-(n%2==0)]<<endl;
        return t[n/2-(n%2==0)];
    }
    void ch(vi a){
        for(int i=1;i<a.size()-1;i++){
            if(med(a, i+1)==med(a, i+1+1)){
                cout<<"pos "<<i<<" v "<<med(a, i)<<endl;
                return;
            }
            cout<<"-------"<<endl;
        }
    }
    void solve(){
        // code here
        new1(n);
        if(n<4){
            cout<<"2 1";
            if(n==3) cout<<" 3";
            cout<<endl;
            return;
        }
        vi a ;
        int i=1, j=n;
        while(i<=j){
            if(i<=j) a.pb(j--);

             if(i<=j) a.pb(i++);
        }
        for(auto x:a)cout<<x<<" ";
        cout<<endl;
        // ch(a);
    }
    int main()
    {
        fastIO;int t=1;
        cin>>t;
        while(t--)  solve();
        return 0;
    }
