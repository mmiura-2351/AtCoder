m, d = map(int, input().split())
year, month, day = map(int, input().split())

if m == month:
  if d == day:
    year += 1
    month = 1
    day = 1
  elif d > day:
    day += 1
elif d == day:
  month += 1
  day = 1
else:
  day += 1

print(year, month, day)