# h, w = map(int, input().split())

# a = [list(map(int,input().split())) for _ in range(h)]

# for i in range(h):
#   row = sum(a[i])
#   for j in range(w):
#     col = 0
#     for k in range(h):
#       col += a[k][j]
#     self = a[i][j]
#     print(row + col - self, end=" ")
#   print()

h, w = map(int, input().split())

a = [list(map(int,input().split())) for _ in range(h)]

row = []
col = []

for i in range(h):
  row.append(sum(a[i]))

for i in range(w):
  total_col = 0
  for j in range(h):
    total_col += a[j][i]
  col.append(total_col)

for i in range(h):
  for j in range(w):
    print(row[i] + col[j] - a[i][j], end=" ")
  print()
