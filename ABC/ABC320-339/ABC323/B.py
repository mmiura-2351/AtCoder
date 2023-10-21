n = int(input())
lst = [-1] * n
for i in range(n):
  lst[i] = input().count("o")

for i in sorted(range(n), key=lambda x: lst[x], reverse=True):
  print(i+1,end=" ")