n = int(input())
a = list(map(int, input().split()))

balls = []

for i in range(n):
  balls.append(a[i])

  while len(balls) >= 2 and balls[-1] == balls[-2]:
    l1 = balls[-2]
    del balls[-2:]
    balls.append(l1+1)

print(len(balls))