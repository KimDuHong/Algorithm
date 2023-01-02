def solution(absolutes, signs):
    answer = 0
    for i in range(len(signs)):
        if not signs[i]:
            absolutes[i] *=-1
    
    for i in absolutes:
        answer+=i
    return answer