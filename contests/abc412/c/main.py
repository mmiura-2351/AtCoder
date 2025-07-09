import sys
input = sys.stdin.readline

def main():
    def domino(n, s):
        first_domino_size = s[0]
        last_domino_size = s[n-1]

        if first_domino_size * 2 >= last_domino_size:
            return 2

        candidates = []
        for i in range(1, n-1):
            candidates.append(s[i])

        candidates.sort()

        current_reach = first_domino_size
        domino_count = 1

        for size in candidates:
            if current_reach * 2 >= last_domino_size:
                break

            if current_reach * 2 >= size:
                next_reach = size
                for candidate in candidates:
                    if current_reach * 2 >= candidate and candidate > next_reach:
                        next_reach = candidate

                if next_reach == current_reach:
                    return -1

                current_reach = next_reach
                domino_count += 1
            else:
                return -1

        if current_reach * 2 >= last_domino_size:
            return domino_count + 1
        else:
            return -1

    t = int(input())
    for _ in range(t):
        n = int(input())
        s = list(map(int, input().split()))
        print(domino(n, s))

if __name__ == "__main__":
    main()
