import sys
input = sys.stdin.readline

def main():
    n = int(input())
    s = [input().strip() for _ in range(n)]
    
    all = set()
    for i in range(n):
        for j in range(n):
            if i == j:
                continue
            all.add(s[i]+s[j])
            
    print(len(all))

if __name__ == "__main__":
    main()
