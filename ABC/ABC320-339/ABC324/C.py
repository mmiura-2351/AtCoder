n, t = input().split()
s = [input() for _ in range(int(n))]
ans = []

def solve1(t,txt):
  return t == txt

def solve2(t,txt):
  for i in range(len(txt)+1):
    for j in range(26):
      if t == txt[:i] + chr(97+j) + txt[i:]: return True
  return False

def solve3(t,txt):
  for i in range(len(txt)):
    if t == txt[:i] + txt[i+1:]: return True
  return False

def solve4(t,txt):
  for i in range(len(txt)):
    for j in range(26):
      if t == txt[:i] + chr(97+j) + txt[i+1:]: return True
  return False

for i in range(int(n)):
  if solve1(t,s[i]):
    ans.append(i+1)
    continue
  if solve2(t,s[i]):
    ans.append(i+1)
    continue
  if solve3(t,s[i]):
    ans.append(i+1)
    continue
  if solve4(t,s[i]):
    ans.append(i+1)
    continue

if len(ans) == 0:
  print(0)
else:
  print(len(ans))
  print(*ans)