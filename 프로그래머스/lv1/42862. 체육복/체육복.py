def solution(n, lost, reserve):
    reserve_set = sorted([i for i in reserve if i not in lost])
    lost_set = sorted([i for i in lost if i not in reserve])
    
    for i in reserve_set:
        if i-1 in lost_set:
            lost_set.remove(i-1)
        elif i+1 in lost_set:
            lost_set.remove(i+1)
            
    return n - len(lost_set)
                
    
