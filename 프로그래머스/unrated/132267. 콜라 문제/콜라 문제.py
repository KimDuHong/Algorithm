def solution(a, b, n):
    i=0
    j=0
    sum=0
    while(True):
        i=n//a*b # 교환한 콜라
        j=n%a # 남은 콜라
        n=i+j 
        sum+=i
        if n<a:
            break

    return sum