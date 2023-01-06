def solution(s):
    answer = True
    tmp = 0
    for i in s:
        if(i == "("):
            tmp +=1
        else:
            tmp-=1
        
        if(tmp <0):
            answer = False
            break
    if not tmp:
        answer = True
    else:
        answer = False
    return answer