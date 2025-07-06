n, l = map(int, input().split())
k = int(input())
a = list(map(int, input().split()))

def check(x):
  num = 0  # 切れる回数のカウンター
  pre = 0  # 前回切った位置
  for i in range(n):  # 羊羹のマークされた位置を順にチェック
    if a[i] - pre >= x:  # 前回の切れ目からの距離がx以上の場合
      num += 1  # 切れる回数を増やす
      pre = a[i]  # 切った位置を更新

  if l - pre >= x:  # 最後の切れ目から羊羹の端までがx以上の場合
    num += 1  # さらに切れる

  return num >= k + 1  # 切れる回数がk+1以上ならTrue、そうでなければFalse

left = -1  # 切れる長さの最小値
right = l + 1  # 切れる長さの最大値
while right - left > 1:  # 範囲が1より大きい間は、範囲を狭める作業を続ける
  mid = (left + right) // 2  # leftとrightの中間の位置を求める
  if check(mid):  # 中間の位置midで羊羹を均等に切ることができるかをチェックする
    left = mid  # 切ることができるなら、leftをmidに更新して範囲を狭める
  else:
    right = mid  # 切ることができないなら、rightをmidに更新して範囲を狭める

print(left)

# 参考：https://drken1215.hatenablog.com/entry/2021/06/12/020300