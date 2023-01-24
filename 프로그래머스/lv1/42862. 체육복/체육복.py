def solution(n, lost, reserve):
    reserve_set = sorted([i for i in reserve if i not in lost])
    lost_set = sorted([i for i in lost if i not in reserve])
    answer = n-len(lost_set)
    for i in lost_set:
        if i-1 in reserve_set:
            reserve_set.remove(i-1)
            answer+=1
        elif i+1 in reserve_set:
            reserve_set.remove(i+1)
            answer+=1           
    return answer
                
    
