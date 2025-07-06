b = int(input())

ans = 1
while True:
  if ans**ans == b:
    print(ans)
    exit()
  elif ans**ans > b:
    break
  ans += 1
print(-1)