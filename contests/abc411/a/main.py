import sys
input = sys.stdin.readline

def main():
    p = input().strip()
    l = int(input())
    print("Yes" if len(p) >= l else "No")

if __name__ == "__main__":
    main()
