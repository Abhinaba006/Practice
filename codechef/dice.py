import math
arr = [0, 20, 36, 51, 60, 76, 88, 99, 104]

for _ in range(int(input())):
    n = int(input())
    if(n<=8):
        print(arr[n])
    else:
        level = math.ceil(n/4)-2
        n -= level*4
        print(arr[n]+level*44)