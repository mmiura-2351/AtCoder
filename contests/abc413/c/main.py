import sys
from collections import deque
input = sys.stdin.readline

def main():
    def type1(A: deque, c: int, x: int):
        A.append((c, x))
        return A

    def type2(A: deque, k: int):
        sum = 0
        while k != 0:
            first_c, x = A[0]
            if first_c > k:
                A[0] = (first_c - k, x)
                sum += x * k
                k = 0
            else:
                k -= first_c
                sum += x * first_c
                A.popleft()

        print(sum)
        return A

    q = int(input())

    A = deque()
    for _ in range(q):
        query = input().strip().split()
        if query[0] == "1":
            c = int(query[1])
            x = int(query[2])
            A = type1(A, c, x)
        elif query[0] == "2":
            k = int(query[1])
            A = type2(A, k)

if __name__ == "__main__":
    main()
