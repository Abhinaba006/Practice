for _ in range(int(input())):
    n = int(input())
    s, c = map(str, input().split())
    res = 0
    for i in range(n):
        for j in range(i+1, n+1):
            if c in s[i:j]:
                res += (n-j)+1
    print(res)
