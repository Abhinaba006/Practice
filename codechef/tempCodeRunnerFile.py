    p_time = convert(p)
    n = int(input())
    for _ in range(n):
        r = input()
        rl = convert(r[:8])
        rr = convert(r[9:])
        if rl<=p_time and p_time<=rr:
            print(1, ' ')
        else:
            print(0, ' ')
    print('\n', '')