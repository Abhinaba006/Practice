#define new3(a, b, c) \
    int a, b, c;      \
    cin >> a >> b >> c;
#define new4(a, b, c, d) \
    int a, b, c, d;      \
    cin >> a >> b >> c >> d;
#define Arr(arr, n) \
    int arr[n + 1]; \
    rep(i, 1, n + 1) cin >> arr[i];
void solve()
{
    // code here
    new1(n);
    Arr(a, n);
    if (is_sorted(a + 1, a + n + 1))
    {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    a[0] = 0;
    for (int i = 1; i < n + 2; i++)
    {
        // if(is_sorted(a+1, a+1+n))
        //     break;
        if (i % 2)
        {
            int p = 0;
            for (int j = 1; j + 1 <= n; j += 2)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    p = 1;
                }
            }
            ans += p;
        }
        else
        {