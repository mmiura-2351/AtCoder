n, s, m, l = map(int, input().split())

max_eggs = n + max(6, 8, 12)
min_cost = [float('inf')] * (max_eggs + 1)
min_cost[0] = 0

for i in range(1, max_eggs + 1):
  if i >= 6: min_cost[i] = min(min_cost[i], min_cost[i - 6] + s)
  if i >= 8: min_cost[i] = min(min_cost[i], min_cost[i - 8] + m)
  if i >= 12: min_cost[i] = min(min_cost[i], min_cost[i - 12] + l)

print(min(min_cost[n:]))