s = input()

stack = []
for char in s:
  stack.append(char)
  if len(stack) >= 3 and "".join(stack[-3:]) == "ABC":
    stack.pop()
    stack.pop()
    stack.pop()

print(*stack, sep="")