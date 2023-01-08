def solution(n):
    a,b = 1,2 
    for i in range(2,n):
        a,b = b,a+b
    if (n == 1): return 1
    return b %1234567
