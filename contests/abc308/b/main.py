N, M = map(int,input().split())
C = input().split()
D = input().split()
P = list(map(int,input().split()))

ans = 0
for i in range(len(C)):
  if C[i] in D:
    ans += P[D.index(C[i]) + 1]
  else:
    ans += P[0]

print(ans)