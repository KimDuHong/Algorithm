def solution(n):
    a,b = 1,2 
    for i in range(2,n):
        a,b = b,a+b
    return n if n<3 else b %1234567
