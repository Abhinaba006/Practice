def val(mat, k):
    avg = 0
    for i in mat:
        avg += sum(i)
    avg /= len(mat)
    if avg>k:
        return True
    return False


for _ in range(int(input())):
    n, m, k = map(int, input().split())
    mat = [list(map(int, input().split())) for _ in range(m)]

    window_length = min(n, m)

    for i in range(n):
        for j in range(m):
            


