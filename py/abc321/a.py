def main():
    n=input()
    for i in range(1,len(n)):
        if int(n[i-1]) <= int(n[i]):
            print("No")
            exit(0)
    print("Yes")
if __name__ == "__main__":
    main()