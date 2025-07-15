#愚直に回す(TLE)

# n = int(input())
# cp = [list(map(int,input().split())) for _ in range(n)]
# q = int(input())

# for i in range(q):
#   l, r = map(int,input().split())
#   lsum = sum([cp[i][1] for i in range(l-1, r) if cp[i][0] == 1])
#   rsum = sum([cp[i][1] for i in range(l-1, r) if cp[i][0] == 2])
#   print(lsum, rsum)

# 累積和

n = int(input())

class1 = [0] * n
class2 = [0] * n

for i in range(n):
  c, p = map(int,input().split())
  if c == 1: class1[i] = p
  else: class2[i] = p

score1 = [0] * (n+1)
score2 = [0] * (n+1)
for i in range(n):
  score1[i+1] = score1[i] + class1[i]
  score2[i+1] = score2[i] + class2[i]

q = int(input())
for i in range(q):
  l, r = map(int,input().split())
  sum1 = score1[r] - score1[l-1]
  sum2 = score2[r] - score2[l-1]
  print(sum1, sum2)

# 参考：https://qiita.com/wihan23/items/2b4402169469019be2e2