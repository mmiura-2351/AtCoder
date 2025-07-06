n = int(input())
a = list(map(int, input().split()))

count = 0

while (1):
  for i in a:
    if i % 2 == 1:
      print(count)
      exit()
    else:
      a[a.index(i)] = i / 2
  count += 1