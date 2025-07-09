import sys
input = sys.stdin.readline

def main():
    n = int(input())
    sum = 0
    for _ in range(n):
        a, b = list(map(int, input().split()))
        if a < b:
            sum += 1
    print(sum)

if __name__ == "__main__":
    main()
