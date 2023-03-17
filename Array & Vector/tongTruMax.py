n = int(input())
a = list(map(int, input().strip().split()))[:n]

maxA = max(a)
s = 0
for i in a:
    if (i != maxA):
        s += i
print(s)
