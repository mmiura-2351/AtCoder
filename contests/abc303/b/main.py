n, m = map(int,input().split())
a = [list(map(int,input().split())) for _ in range(m)]

count = 0
for i in range(1, n+1):
  for j in range(i+1, n+1):
    ok = True
    for k in range(m):
      place = [index + 1 for index, x in enumerate(a[k]) if x == i or x == j]
      if abs(place[0] - place[1]) == 1:
        ok = False
        break
    if ok:
      count += 1

print(count)
