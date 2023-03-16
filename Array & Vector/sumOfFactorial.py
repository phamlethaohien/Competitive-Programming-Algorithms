def sum(n):
    s = 0
    fact = 1
    
    for i in range(1, n+1):
        fact *= i
        s += 1.0/fact
        
    print(s)

n = int(input())

sum(n)
