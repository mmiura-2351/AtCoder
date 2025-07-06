S = list(map(int,input().split()))
for i in range(1,len(S)):
  if S[i] < S[i-1]:
    print("No")
    exit()

for i in S:
  if (i < 100 or i > 675) or i % 25 != 0:
    print("No")
    exit()

print("Yes")
