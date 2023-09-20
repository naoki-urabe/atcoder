def main():
    n = int(input())
    bin = []
    while(n != 0):
        bin.append(n%2)
        n=int(n/2)
    bin.reverse()
    for i in range(10-len(bin)):
        print("0", end="")
    for i in range(len(bin)):
        print(bin[i],end="")
    print()
if __name__ == "__main__":
    main()