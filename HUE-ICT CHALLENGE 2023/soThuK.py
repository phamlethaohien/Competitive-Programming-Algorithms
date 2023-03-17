import sys
input = sys.stdin.readline

n, k = map(int, input().split())

n1 = 2**n - 1
d = 1

if n1 < k :
    sys.stdout.write(str(-1) + "\n")
else:
    while k != 1:
        if k > (2**(n - d)):
            k = k - 2**(n - d)
        else:
            k = k-1
        d += 1
    sys.stdout.write(str(n - d + 1) + "\n")