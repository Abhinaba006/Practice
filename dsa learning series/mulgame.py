for _ in range(int(input())):
    n, q, m = map(int, input().split())
    a = list(map(int, input().split()))
    s = 0
    for _ in range(q):
        l, r = map(int, input().split())
        temp = n+0
        counter = 0
        while(temp>0 and r>=l):
            if(temp>=a[r-1]):
                temp -= a[r-1]
                counter += 1
            r -= 1
        # print("counter is ",counter)
        if (counter%2==1):
            s += 1
    print(s, end='\n')
        
