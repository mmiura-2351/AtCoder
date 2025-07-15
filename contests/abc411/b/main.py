import sys
input = sys.stdin.readline

def main():
    n = int(input())
    d = list(map(int, input().strip().split()))

    for i in range(n-1):
        lst = []
        for j in range(i+1, n):
            # print(sum(d[i:j]), end=" ")
            lst.append(str(sum(d[i:j])))
        print(" ".join(lst))
        lst.clear()

if __name__ == "__main__":
    main()
