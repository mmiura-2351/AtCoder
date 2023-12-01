from math import gcd as getGcd

a, b, c = map(int, input().split())
gcd = getGcd(getGcd(a, b), c)
ans = (a // gcd) + (b // gcd) + (c // gcd) - 3
print(ans)

# https://ebinafactory.hatenablog.com/entry/2021/10/14/003903

# 振り返り
'''
最大公約数までは思いついたが、その後の計算が思いつかなかった。

"/"はfloatを返すが"//"はintを返す
'''