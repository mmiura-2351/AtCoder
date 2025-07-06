# ABC259 A
n, m, x, t, d = map(int, input().split())

while n-1 >= m:
  if n <= x:
    t -= d

print(t)

