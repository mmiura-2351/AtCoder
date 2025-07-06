n, q = map(int, input().split())
s = input()

c_sum = [0] * (n + 1)
for i in range(1, n):
  c_sum[i + 1] = c_sum[i] + (s[i] == s[i - 1])

for j in range(q):
  a, b = map(int, input().split())
  print(c_sum[b] - c_sum[a])