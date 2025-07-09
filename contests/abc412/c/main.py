import sys
input = sys.stdin.readline

def main():
    def domino(n, s):
        min_dominos = [s[0]]
        sorted_dominos = sorted(s)
        for i in range(n):
            if sorted_dominos[i] <= min_dominos[0]:
                continue
            elif i == n-1:
                if min_dominos[-1]*2 >= sorted_dominos[i]:
                    return len(min_dominos) + 1
                else:
                    return -1
            else:
                if min_dominos[-1]*2 >= sorted_dominos[i]:
                    if min_dominos[-1]*2 >= sorted_dominos[i+1]:
                        continue
                    else:
                        min_dominos.append(sorted_dominos[i])
                else:
                    return -1

    t = int(input())
    for _ in range(t):
        n = int(input())
        s = list(map(int, input().split()))
        print(domino(n, s))

if __name__ == "__main__":
    main()
