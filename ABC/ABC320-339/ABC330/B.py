n, l, r = map(int, input().split())
a = list(map(int, input().split()))

x = []
for i in a:
  if i < l:
    xx = l
  elif i > r:
    xx = r
  else:
    xx = i
  x.append(xx)

print(*x)