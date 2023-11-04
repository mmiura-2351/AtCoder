A = [list(map(int,input().split())) for _ in range(9)]

# 縦をチェックする
def check1(A):
  for col in range(9):
    checkLst = [False] * 9
    for row in range(9):
      checkLst[A[row][col]-1] = True
    if not all(checkLst):
      return False
  return True

# 横をチェックする
def check2(A):
  for row in range(9):
    checkLst = [False] * 9
    for col in range(9):
      checkLst[A[row][col]-1] = True
    if not all(checkLst):
      return False
  return True

# 3x3をチェックする
def check3(A):
  for dx in range(0, 9, 3):
    for dy in range(0, 9, 3):
      checkLst = [False] * 9
      for i in range(3):
        for j in range(3):
          checkLst[A[i+dx][j+dy]-1] = True
      if not all(checkLst):
        return False
  return True

if check1(A) and check2(A) and check3(A):
  print("Yes")
else:
  print("No")