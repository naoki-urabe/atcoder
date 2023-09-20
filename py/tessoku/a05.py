def main():
    n,k=map(int, input().split())
    ans=0
    for i in range(1,n+1):
        for j in range(1, n+1):
            # print(i,j,k-i-j)
            if k-i-j<=n and k-i-j > 0:
                ans+=1       
    print(ans)
if __name__ == "__main__":
    main()