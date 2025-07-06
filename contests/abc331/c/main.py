n = int(input())
a = list(map(int, input().split()))

sorted_a = sorted((a, i) for i, a in enumerate(a))
sum = [0] * (n + 1)
for i in range(n):
  sum[i+1] = sum[i] + sorted_a[i][0]

ans = [0] * n
for a, i in sorted_a:
  l, r = -1, n
  while r - l > 1:
    mid = (l + r) // 2
    if sorted_a[mid][0] > a:
      r = mid
    else:
      l = mid

  ans[i] = sum[n] - sum[r]

print(*ans)