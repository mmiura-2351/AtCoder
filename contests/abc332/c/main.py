n, m = map(int, input().split())
s = input()

muji = m
logo = 0
used_logo = 0
need = 0

for i in s:
  if i == "0":
    logo = max(logo, used_logo)
    used_logo = 0
    muji = m
  elif i == "1":
    if muji > 0:
      muji -= 1
    else:
      used_logo += 1
  else:
    used_logo += 1

logo = max(logo, used_logo)

print(logo)
