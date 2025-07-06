import sys
input = sys.stdin.readline

def main():
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    
    print("Yes" if sum(a) <= m else "No")

if __name__ == "__main__":
    main()
