def min_product(a, n, k):
    a[0] = int(a[0])
    if (n==1):
        return a[0];
    elif k>=n-1: return (a[0]*int(arr[-1]))%1000000007

    min_arr =[a[0]]
    for i in range(0, k):
        temp = (arr[0]*int(arr[i]))
        min_arr.append(temp)

    for i in range(k, n):
        temp = min(min_arr)*int(a[i])
        min_arr.append(temp)
        del min_arr[0]

    return min_arr[-1]%1000000007;
n, k = map(int, input().split())
arr = input().split()[::-1]
ans = min_product(arr, n, k)
print(ans)