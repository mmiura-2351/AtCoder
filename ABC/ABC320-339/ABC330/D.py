def count_ls(n, s):
  row = [0] * n
  col = [0] * n

  for i in range(n):
    for j in range(n):
      if s[i][j] == "o":
        row[i] += 1
        col[j] += 1
  
  # print(row)
  # print(col)

  count = 0
  for i in range(n):
    for j in range(n):
      if s[i][j] == "o":
        count += (row[i] - 1) * (col[j] - 1)

  return count

n = int(input())
s = [input() for _ in range(n)]

print(count_ls(n, s))
