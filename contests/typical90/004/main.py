import sys
input = sys.stdin.readline

def main():
    h, w = list(map(int, input().strip().split()))
    A = []
    A_h, A_w = [], []
    for _ in range(h):
        row = list(map(int, input().strip().split()))
        A.append(row)
        A_h.append(sum(row))

    for i in range(w):
        col = []
        for j in range(h):
            col.append(A[j][i])
        A_w.append(sum(col))

    for i in range(h):
        t = []
        for j in range(w):
            t.append(str(A_h[i]+A_w[j]-A[i][j]))
        print(" ".join(t))

if __name__ == "__main__":
    main()
