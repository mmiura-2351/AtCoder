from itertools import combinations

n, p, q = map(int, input().split())
a = list(map(int, input().split()))

count = 0
for i in combinations(a, 5):
  # if (i[0] * i[1] * i[2] * i[3] * i[4]) % p == q:  # TLE
  if (i[0] % p * i[1] % p * i[2] % p * i[3] % p * i[4] % p) == q:
    count += 1

print(count)