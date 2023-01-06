def solution(s):
    tmp = 0
    for i in s:
        if(i == "("):
            tmp +=1
        else:
            tmp-=1
        if(tmp <0):
            break
    return False if tmp else True