# 参考 https://drken1215.hatenablog.com/entry/2023/05/29/020800
N, M, H, K = map(int,input().split())
S = input()
items = set(tuple(map(int,input().split())) for _ in range(M))
x,y = 0,0

for i in S:
  if i == "U": y += 1
  elif i == "D": y -= 1
  elif i == "L": x -= 1
  elif i == "R": x += 1

  H -= 1
  if H < 0:
    print("No")
    break

  if H < K and (x,y) in items:
    H = K
    items.remove((x,y))

else:
  print("Yes")
