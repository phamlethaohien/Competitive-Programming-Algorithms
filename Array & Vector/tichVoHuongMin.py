t = int(input())

for case in range (t):
    n = int(input())
    A = list(map(int,input().split()))
    B = list(map(int,input().split()))
    
    A.sort()
    B.sort(reverse=True)
    
    t=0
    for i in range (n):
        t = t+A[i]*B[i]
    print ('Case #',case+1,':', t)
