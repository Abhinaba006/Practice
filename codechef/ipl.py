for i in range(int(input(''))):
    l = list(map(int,input().split()))
    n = l[0]
    k = l[1]
    h = list(map(int,input().split()))
    h.sort(reverse=True)
    if sum(h)<k*2:
        print(-1)
        quit()
    if k==0:
        print(0)
        quit()
    m=[h[0]]
    t=[h[1]]
    i=2
    while(sum(m)<k and sum(t)<k and i<n):
        #print('in loop')
        if sum(m)>sum(t):
            if abs(h[i]+sum(m)-k) < abs(h[i]+sum(t)-k):
                m.append(h[i])
                t.append(h[i+1])
                i=i+2
                print(m,t,'Case 1.1')
            else:
                t.append(h[i])
                m.append(h[i+1])
                i=i+2
                print(m,t,'Case 1.2')
        else:
            if abs(h[i]+sum(t)-k) < abs(h[i]+sum(m)-k):
                t.append(h[i])
                m.append(h[i+1])
                i=i+2
                print(m,t,'Case 2.1')
            else:
                m.append(h[i])
                t.append(h[i+1])
                i=i+2
                print(m,t,'Case 2.2')
    if sum(m)<k:
        while(sum(m)<k):
            m.append(h[i])
            i=i+1
            print(m)
            
    if(sum(t)<k):
        while(sum(t)<k):
            t.append(h[i])
            i=i+1
            print(t)
    print(len(m)+len(t))