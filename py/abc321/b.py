def main():
    n,x=map(int, input().split())
    a=map(int, input().split())
    a=sorted(a)
    res1=sum(a)-a[n-2]-a[0]
    res2=sum(a)-a[0]
    res3=sum(a)-a[n-2]
    if res3 >= x or res1 >= x:
        print(0)
        exit(0)
    if 100 >= x-res1 or 100 >= x-res2:
        print(x-res1,x-res2)
    else :
        print(-1) 
    
if __name__ == "__main__":
    main()