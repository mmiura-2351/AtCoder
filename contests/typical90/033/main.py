h, w = map(int, input().split())

h = h / 2 if h % 2 == 0 else h // 2 + 1
w = w / 2 if w % 2 == 0 else w // 2 + 1

print(int(h*w))