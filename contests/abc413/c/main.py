import sys
input = sys.stdin.readline

def main():
    def type1(A: list, query):
        A.append(query)
        return A

    def type2(A: list, query):
        # print(A, query)
        k = int(query[1])
        sum = 0
        while k != 0:
            # print(f"{sum=}")
            # print(A)
            # print(sum)
            first_c = int(A[0][1])
            x = int(A[0][2])
            if first_c > k:
                # print("c > k")
                # first_c = first_c - k
                A[0][1] = str(first_c - k)
                sum += x*k
                k = 0
            else:
                # print("k > c")
                k -= first_c
                sum += x*first_c
                A.pop(0)

        print(sum)
        return A

    q = int(input())

    A = []
    for _ in range(q):
        query = input().strip().split()
        # print(A)
        if query[0] == "1":
            A = type1(A, query)
        elif query[0] == "2":
            A = type2(A, query)

if __name__ == "__main__":
    main()
