s = input()

for i in range(int(len(s)/2)):
  if s[i] != s[-1-i]:
    print("No")
    exit()

l = 0
if (len(s)/2) % 2 == 1:
  l = int(len(s)/2) - 1
else:
  l = int(len(s)/2)
ss = s[:l]

for i in range(l):
  if ss[i] != ss[-1-i]:
    print("No")
    exit()

print("Yes")