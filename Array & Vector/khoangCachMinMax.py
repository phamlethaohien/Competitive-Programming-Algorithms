import math

n = int(input())
A = list(map(int, input().split()))

print(abs(A.index(max(A)) - A.index(min(A))))
