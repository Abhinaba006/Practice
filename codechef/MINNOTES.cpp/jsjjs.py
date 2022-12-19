a = [i for i in range(1, 1000)]
x = []
y = []

for i in range(1, 1000-1):
    for j in range(i+1, 1000):
        if(i**2+j**2)%((i*j)+1)==0:
            x.append(i)
            x.append(j)
            y.append(i)
            y.append(j)