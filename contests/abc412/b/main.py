import sys
input = sys.stdin.readline

def main():
    def check(s: str, t: str):
        for i in range(len(s)-1):
            if s[i+1].isupper():
                if s[i] in t:
                    continue
                else:
                    return False
        return True

    s = input()
    t = input()
    print("Yes" if check(s, t) else "No")

if __name__ == "__main__":
    main()
