def convert(time):
    time_int = ((int(time[0])*10)+int(time[1]))*60 + ((int(time[3])*10)+int(time[4]))
    if(time[6]=='P'):
        time_int += 720
    else:
        time_int %= 720
    return time_int


for _ in range(int(input())):
    p = input()
    p_time = convert(p)
    n = int(input())
    for _ in range(n):
        r = input()
        rl = convert(r[:8])
        rr = convert(r[9:])
        if rl==rr:
            print(0, end='')
        elif rl<=p_time and p_time<=rr:
            print(1, end='')
        else:
            print(0, end='')
    print('')
