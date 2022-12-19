def g(a,b):
    if (b == 0):
        return a
    return g(b, a%b)
    
for _ in range(int(input())):
    k = int(input())
    print(k)
    ans = 0
    for i in range(1, (2*k)+1):
        ans += g(k+(i**2), k+((i+1)**2))
    print(ans)