n = int(input())

for x in range(n):
  for y in range(n):
    a = (2**x) * (3**y)
    if a == n:
      print("Yes")
      exit()
    elif a > n:
      break
  if 2**x > n:
    break
print("No")
