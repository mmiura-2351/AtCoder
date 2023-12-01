# TLE
# n = int(input())

# users = []
# for i in range(1, n + 1):
#   user = input()
#   if user not in users:
#     users.append(user)
#     print(i)

n = int(input())

users = set()
for i in range(1, n + 1):
  user = input()
  if user not in users:
    users.add(user)
    print(i)

# 振り返り
'''
set型はリストと違い、値の探索が高速にできる。(しかし順序は保証されないため、注意が必要)
'''