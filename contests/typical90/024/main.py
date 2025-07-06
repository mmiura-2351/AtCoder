n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

count = 0
for i in range(n):
  count += abs(a[i] - b[i])

print("Yes" if count < k and (k - count) % 2 == 0 or count == k else "No")