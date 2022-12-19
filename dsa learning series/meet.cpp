def convert24(str1): 
    if str1[-2:] == "AM" and str1[:2] == "12": 
        return "00" + str1[2:-2] 
    elif str1[-2:] == "AM": 
        return str1[:-2] 
    elif str1[-2:] == "PM" and str1[:2] == "12": 
        return str1[:-2] 
    else: 
        return str(int(str1[:2]) + 12) + str1[2:5] 

def intConv(str2):
    h = int(str2[0])*10+int(str2[1])
    m = int(str2[3])*10+int(str2[4])
    time = h*60+m
    return time
    
def final(str):
    return intConv(convert24(str))

for _ in range(int(input()):
	p = final(input())
	n = int(input())
	for _ in range(r):
	    f = input()
	    l = final(f[:8])
	    r = final(f[9:])
	    if p>=l and p<=r:
	        print(1, end='')
	    else:
	        print(0, end='')
	    print('')