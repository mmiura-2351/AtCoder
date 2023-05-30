N = int(input())
S = input()

if S.count("A") == S.count("T"):
  print("A" if S[-1] == "T" else "T")
else:
  print("A" if S.count("A") > S.count("T") else "T")