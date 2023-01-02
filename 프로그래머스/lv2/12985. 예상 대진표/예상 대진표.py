def solution(n,a,b):
    answer = 0
    while(1):
        if a == b:
            break
        answer+=1
        a,b = (a+1)//2,(b+1)//2
    return answer