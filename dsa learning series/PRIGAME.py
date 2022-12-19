MAX = 1000001
prefix =[0]*(MAX + 1)
counter =[0]*(MAX + 1)

  
def buildPrefix(): 
    prime = [1]*(MAX + 1) 
    p = 2
    while(p * p <= MAX):  
        if (prime[p] == 1): 
            i = p * 2
            while(i <= MAX): 
                prime[i] = 0
                i += p 
        p+=1
    for i in range(2, MAX+1):
        counter[i] = counter[i-1]
        if prime[i]==1:
            counter[i]+=1

buildPrefix()
for _ in(range(int(input()))):
    x, y = map(int, input().split())
    dic = {0:'Chef', 1:'Divyam '}
    if y==1:
        if x<=2:
            print(dic[0])
        else:
            print(dic[1])
    else:
        ans = counter[x]
        if ans<=y:
            print(dic[0])
        else:
            print(dic[1])

