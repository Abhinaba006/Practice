def lang(l):
    if (l<='m' and l>='a'):
        return 0
    if (l>='N' and l<='Z'):
        return 1
    return 2
for _ in range(int(input())):
    k = int(input())
    s = input().split()
    flag = s[0][0]
    tem = flag
    ans=1

    for i in s:
        for j in i:
            flag = lang(j)
            if(flag==2):
                ans=0
                break
            if(tem!=flag):
                ans=0
                break
    if(flag==1):
        print('YES')
    else:
        print('NO')