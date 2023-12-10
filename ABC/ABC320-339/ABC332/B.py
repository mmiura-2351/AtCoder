k, g, m = map(int, input().split())

glass = 0
mugcup = 0

for _ in range(k):
  if glass == g:
    glass = 0
  elif mugcup == 0:
    mugcup = m
  else:
    t = min(g - glass, mugcup)
    glass += t
    mugcup -= t

print(glass, mugcup)