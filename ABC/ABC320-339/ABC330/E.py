# TLE

def mex(lst):
  num_set = set(lst)
  for number in range(len(lst) + 1):
    if number not in num_set:
      return number

n, q = map(int, input().split())
a = list(map(int, input().split()))

for i in range(q):
  num1, num2 = map(int, input().split())
  a[num1-1] = num2
  print(mex(a))