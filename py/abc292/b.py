n,q = map(int, input().split())
point=[0]*n
for i in range(q):
    op,x = map(int, input().split())
    if op == 1:
        point[x-1]+=1
    elif op == 2:
        point[x-1]+=2
    else:
        if point[x-1]>=2:
            print("Yes")
        else:
            print("No")